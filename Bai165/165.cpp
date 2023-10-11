#include <iostream>
using namespace std;

void nhap(float[], int&);
float max(float[], int);
void xoavitri(float[], int& ,int);
void xoamax(float[], int&);
void xuat(float[], int);

int main()
{
	int n;
	float a[500];
	nhap(a, n);
	xuat(a, n);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;
	cout << "Nhap cac phan tu cua mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

float max(float a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}

void xoavitri(float a[], int& n, int k)
{
	for (int i = k; i < n - 1; i++)
		a[i] = a[i + 1];
	n--;
}

void xoamax(float a[], int& n)
{
	float ln = max(a, n);
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == ln)
			xoavitri(a, n, i);
}

void xuat(float a[], int n)
{
	xoamax(a, n);
	cout << "mang sau khi cac phan tu lon nhat bi xoa: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}