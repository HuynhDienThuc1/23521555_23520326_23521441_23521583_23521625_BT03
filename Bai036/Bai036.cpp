#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void nhap(int[], int&);
void xuat(int[], int);
bool ktrchinhphuong(int);
int tongchinhphuong(int[], int);

int main()
{
	int a[500];
	int n;
	nhap(a, n);
	cout << "Mang ban dau la: ";
	xuat(a, n);
	cout << "Ket qua la: ";
	cout << tongchinhphuong(a, n);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap gia tri n: ";
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

bool ktrchinhphuong(int n)
{
	for (int i = 1; i <= sqrt(n); i++)
		if (i * i == n)
			return true;
	return false;
}

int tongchinhphuong(int a[], int n)
{
	int s = 0;
	for (int i = 0; i <= n - 1; i++)
		if (ktrchinhphuong(a[i]))
			s = s + a[i];
	return s;
}