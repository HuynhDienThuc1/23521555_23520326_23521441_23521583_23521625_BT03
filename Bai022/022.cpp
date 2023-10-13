#include <iostream>
#include <cmath>
using namespace std;

void nhap(int[], int&);
void lietke(int[], int);
void xuat(int[], int);

int main()
{
	int a[500];
	int n;
	nhap(a, n);
	xuat(a, n);
	return 0;
}
void nhap(int a[], int& n)
{
	cout << "Nhap so luong phan tu cua mang:";
	cin >> n;
	cout << "Nhap cac phan tu cua mang:\n";
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void lietke(int a[], int n)
{
	cout << "cac so sau khi lua chon la: ";
	for (int i = 1; i <= n - 1; i++)
	{
		if ((a[i] < abs(a[i + 1])) && (a[i] > a[i - 1]))
			cout << a[i] << " ";
	}
}

void xuat(int a[], int n)
{
	lietke(a, n);
}