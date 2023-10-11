#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int TimChuSo(int[], int);
int ViTriDuongDau(int[], int);
int ViTriDuongNhoNhat(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout <<"Chu so xuat hien it nhat: " << TimChuSo(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	cout << "Nhap mang: \n";
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}
int TimChuSo(int a[], int n)
{
	int dem[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	for (int i = 0; i < n; i++)
	{
		int t = abs(a[i]);
		while (t != 0)
		{
			int dv = t % 10;
			dem[dv]++;
			t = t / 10;
		}
	}
	return ViTriDuongNhoNhat(dem, 10);
}
int ViTriDuongDau(int dem[], int n)
{
	for (int i = 0; i < n; i++)
		if (dem[i] > 0)
			return i;
	return -1;
}
int ViTriDuongNhoNhat(int dem[], int n)
{
	int lc = ViTriDuongDau(dem, 10);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
		if (dem[i] < dem[lc] && dem[i] > 0)
			lc = i;
	return lc;
}