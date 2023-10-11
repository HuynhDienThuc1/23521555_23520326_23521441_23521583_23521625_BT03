#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void nhap(float[], int&);
void xuat(float[], int);
float duongdau(float[], int);
float duongnhonhat(float[], int);
void lietke(float[], int);

int main()
{
	float a[500];
	int n;
	nhap(a, n);
	cout << "Mang ban dau: ";
	xuat(a, n);
	cout << "Ket qua la: ";
	lietke(a, n);
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

float duongdau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			return a[i];
	return -1;
}

float duongnhonhat(float a[], int n)
{
	float lc = duongdau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
		if (a[i] > 0 && a[i] < lc)
			lc = a[i];
	return lc;
}

void lietke(float a[], int n)
{
	float dd = duongnhonhat(a, n);
	if (dd == -1)
	{
		cout << "Khong co gia tri duong ";
		return;
	}
	for (int i = 0; i < n; i++)
		if (a[i] == dd)
			cout << i<<" ";
}