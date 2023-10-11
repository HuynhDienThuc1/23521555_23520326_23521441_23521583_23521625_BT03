#include <iostream>
#include <cmath>
using namespace std;

void nhap(int[], int&);
bool ktchinhphuong(int);
int sodau(int[], int);
void xuat(int[], int);

int main()
{
	int n;
	int a[500];
	nhap(a, n);
	xuat(a, n);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap vao so phan tu cua mang: ";
	cin >> n;
	cout << "Nhap cac phan tu cua mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

bool ktchinhphuong(int n)
{
	for (int i = 1; i <= sqrt(n); i++)
		if (n == i * i)
			return true;
	return false;
}

int sodau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktchinhphuong(a[i]))
			return a[i];
	return -1;
}

void xuat(int a[], int n)
{
	cout << "ket qua sau khi da kiem tra la: " << sodau(a, n);
}