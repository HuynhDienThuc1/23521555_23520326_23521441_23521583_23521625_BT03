#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemXuatHien(int[], int, int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang a:\n";
	Xuat(b, k);

	int a[100];
	int l;
	Nhap(a, l);
	cout << "\nMang b:\n";
	Xuat(a, l);

	int kq = DemXuatHien(b, k, a, l);
	cout << "\nSo lan xuat hien cua mang a trong mang b: " << kq;
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "\nNhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 201 - 100;
}

void Xuat(int a[], int n)
{
	cout << n << endl;
	for (int i = 0; i < n; i++)
		cout << setw(10) << a[i];
}

int DemXuatHien(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int dem = 0;
	for (int vt = 0; vt <= m - n; vt++)
	{
		int flag = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}