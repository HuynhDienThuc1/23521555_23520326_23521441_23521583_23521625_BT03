#include <iostream>
#include <iomanip>
void nhap(int[], int&);
void XoaViTri(int[], int&,int);
bool ktNguyenTo(int);
void XoaNguyenTo(int[], int&);
void xuat(int[], int);
using namespace std;

int main()
{
	int n,k;
	int a[100];
	nhap(a, n);
	XoaNguyenTo(a, n);
	xuat(a, n);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "nhap so luong chu so cua mang:";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]:";
		cin >> a[i];
	}
}

void XoaViTri(int a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
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


void XoaNguyenTo(int a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktNguyenTo(a[i]))
			XoaViTri(a, n, i);
}

void xuat(int a[], int n)
{
	cout << "mang sau sap xep la:";
	for (int i = 0; i < n; i++)
	{
		cout << " a[" << i << "]:" << a[i] << setw(4);
	}
}