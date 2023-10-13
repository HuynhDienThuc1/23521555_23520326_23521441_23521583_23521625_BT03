#include <iostream>
#include <iomanip>
void nhap(int[], int&);
void ChanVeDau(int[], int);
void LeVeCuoi(int[], int);
void ChanDauLeCuoi(int[], int);
void xuat(int[], int);
using namespace std;

int main()
{
	int n;
	int a[100];
	nhap(a, n);
	ChanDauLeCuoi(a, n);
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

void ChanVeDau(int a[], int n)
{
	int vt = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0 && a[i] != 0)
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt++;
		}
}

void LeVeCuoi(int a[], int n)
{
	int vp = n - 1;
	for (int i = n - 1; i >= 0; i--)
		if (a[i] % 2 != 0)
		{
			int temp = a[i];
			a[i] = a[vp];
			a[vp] = temp;
			vp--;
		}
}

void ChanDauLeCuoi(int a[], int n)
{
	ChanVeDau(a, n);
	LeVeCuoi(a, n);
}

void xuat(int a[], int n)
{
	cout << "mang sau sap xep la:";
	for (int i = 0; i < n; i++)
	{
		cout << " a[" << i << "]:" << a[i] << setw(4);
	}
}