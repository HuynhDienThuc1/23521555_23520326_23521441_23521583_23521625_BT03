#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
float lonnhat(float[], int);
int demlonnhat(float[], int);

int main()
{
	float a[500];
	int n;
	nhap(a, n);
	cout << "Mang ban dau la: ";
	xuat(a, n);
	cout << "Ket qua la: ";
	cout << (demlonnhat(a, n));
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

float lonnhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}

int demlonnhat(float a[], int n)
{
	float ln = lonnhat(a, n);
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == ln)
			dem++;
	return dem;
}