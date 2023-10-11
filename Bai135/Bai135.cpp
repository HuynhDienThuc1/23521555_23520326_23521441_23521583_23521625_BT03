#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void nhap(float[], int&);
void xuat(float[], int);
void xaydung(float[], int, float[]);

int main()
{
	float a[500];
	float b[500];
	int n;
	int k;
	nhap(a, n);
	cout << "Mang ban dau la: ";
	xuat(a, n);
	cout << "Mang b la: ";
	xaydung(a, n, b);
	xuat(b, n);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "Nhap n: ";
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

void xaydung(float a[], int n, float b[])
{
	if (n == 1)
	{
		b[0] = 0;
		return;
	}
	b[0] = a[1];
	for (int i = 1; i < n - 1; i++)
		b[i] = a[i - 1] + a[i + 1];
	b[n - 1] = a[n - 2];
}