#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void nhap(float[], int&);
void xuat(float[], int);
void xoavitri(float[], int&, int);
void xoatrung(float[], int&, float);
int tansuat(float[], int, float);
void xoaphantu(float[], int&);

int main()
{
	float a[500];
	int n;
	nhap(a, n);
	cout << "Mang ban dau la: ";
	xuat(a, n);
	cout << "Ket qua la: ";
	xoaphantu(a, n);
	xuat(a, n);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]=";
		cin >> a[i];
	}
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

void xoavitri(float a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

void xoatrung(float a[], int& n, float x)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == x)
			xoavitri(a, n, i);
}

int tansuat(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

void xoaphantu(float a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (tansuat(a, n, a[i]) > 1)
			xoatrung(a, n, a[i]);
}