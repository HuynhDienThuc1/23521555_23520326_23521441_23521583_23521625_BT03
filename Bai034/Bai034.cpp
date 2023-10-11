#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
float ktHoanThien(float[], int);

int main()
{
	float A[30];
	int n;
	Nhap(A, n);
	cout << "Tong cac so duong la: " << ktHoanThien(A, n);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

float ktHoanThien(float a[], int n)
{
	float s = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0)
			s = s + a[i];
	return s;
}
