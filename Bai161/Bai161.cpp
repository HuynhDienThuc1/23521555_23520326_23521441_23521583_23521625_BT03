#include <iostream>
#include <cmath>

using namespace std;

void Nhap(float[], int&);
void Xoavitri(float [], int& , int );
void Xoaam(float [], int& );
void Xuat(float[], int&);

int main()
{
	int n;
	float a[500];
	Nhap(a, n);
	Xoaam(a, n);
	cout << "Mang sau khi xoa: ";
	Xuat(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "] = ";
		cin >> a[i];
	}
}

void Xoavitri(float a[], int& n,int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}
void Xoaam(float a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] < 0)
			Xoavitri(a, n, i);
}
void Xuat(float a[], int& n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
