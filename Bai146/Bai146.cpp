#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void nhap(int[], int&);
void xuat(int[], int);
void tron(int[], int, int[], int, int[], int&);

int main()
{
	int a[500];
	int b[500];
	int c[500];
	int n, m, p;
	nhap(a, n);
	nhap(b, m);
	cout << "Mang a la: ";
	xuat(a, n);
	cout << "Mang b la: ";
	xuat(b, m);
	cout << "Ket qua la: ";
	tron(a, n, b, m, c, p);
	xuat(c, p);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]=";
		cin >> a[i];
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

void tron(int a[], int n, int b[], int m, int c[], int& p)
{
	int i = 0;
	int j = 0;
	p = 0;
	while (!(i >= n && j >= m))
	{
		if ((i < n && j < m && a[i] < b[j]) || (j > m))
			c[p++] = a[i++];
		else
			c[p++] = b[j++];
	}
}