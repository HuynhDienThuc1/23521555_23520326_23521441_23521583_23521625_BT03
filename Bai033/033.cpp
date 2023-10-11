#include <iostream>
using namespace std;

void nhap(float[], int&);
float tong(float[], int);
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
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}

float tong(float a[], int n)
{
	float s = 0;
	for (int i = 0; i <= n - 1; i++)
		s += a[i];
	return s;
}

void xuat(float a[], int n)
{
	cout << "tong cac phan tu trong mang: " tong(a, n);
}