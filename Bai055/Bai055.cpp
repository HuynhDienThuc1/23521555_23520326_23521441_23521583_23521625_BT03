#include <iostream>
using namespace std;

void nhap(int[], int&);
bool nguyento(int);
int xuly(int[], int);
void xuat(int[], int);

int main()
{
	int n;
	int a[500];
	nhap(a, n);
	xuat(a, n);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap so luong phan tu trong mang: ";
	cin >> n;
	cout << "Nhap cac phan tu trong mang: ";
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}

bool nguyento(int n)
{
	int t = n;
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (t % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	else
		return false;
}

int xuly(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (nguyento(a[i]))
			dem++;
	return dem;
}

void xuat(int a[], int n)
{
	cout << "so luong so nguyen to trong mang la: " << xuly(a, n);
}