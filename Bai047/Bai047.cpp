#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void nhap(float[], int&);
void xuat(float[], int);
float tonggiatri(float[], int, float);
int demgiatri(float[], int, float);
float trungbinhcong(float[], int, float);

int main()
{
	float a[500];
	int n;
	float x;
	cout << "Nhap gia tri cua x: ";
	cin >> x;
	nhap(a, n);
	cout << "Mang ban dau: ";
	xuat(a, n);
	cout << "Ket qua la: ";
	cout << trungbinhcong(a, n, x);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "Nhap gia tri n: ";
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

float tonggiatri(float a[], int n, float x)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > x)
			s = s + a[i];
	return s;
}

int demgiatri(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > x)
			dem++;
	return dem;
}

float trungbinhcong(float a[], int n, float x)
{
	float s = tonggiatri(a, n, x);
	int dem = demgiatri(a, n, x);
	if (dem == 0)
		return 0;
	return s / dem;
}