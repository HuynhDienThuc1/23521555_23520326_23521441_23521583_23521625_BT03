#include <iostream>
using namespace std;
void Nhap(int[], int&);
bool ktNguyenTo(int);
int NguyenToDau(int[], int);
int TimGiaTri(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "So nguyen to lon nhat la: " << TimGiaTri(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:";
		cin >> a[i];
	}
}

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
		dem++;
	if (dem == 2)
		return true;
	return false;
}

int NguyenToDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]))
			return a[i];
	return 0;
}

int TimGiaTri(int a[], int n)
{
	int lc = NguyenToDau(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]) && a[i] > lc)
		lc = a[i];
	return lc;
}