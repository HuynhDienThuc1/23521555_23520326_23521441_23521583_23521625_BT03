#include <iostream>
using namespace std;

void nhap(float[], int&);
float max(float[], int);
float min(float[], int);
void timdoan(float[], int, float&, float&);
void xuat(float[], int, float&, float&);

int main()
{
	int n;
	float x, y;
	float a[500];
	nhap(a, n);
	xuat(a, n, x, y);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "nhap vao so luong phan tu cua mang: ";
	cin >> n;
	cout << "nhap vao cac phan tu cua mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

float max(float a[], int n)
{
	int max = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}
float min(float a[], int n)
{
	int min = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] < min)
			min = a[i];
	return min;
}

void timdoan(float a[], int n, float& x, float& y)
{
	x = min(a, n);
	y = max(a, n);
}

void xuat(float a[], int n, float& x, float& y)
{
	timdoan(a, n, x, y);
	cout << "[" << x << ", " << y << "]";
}