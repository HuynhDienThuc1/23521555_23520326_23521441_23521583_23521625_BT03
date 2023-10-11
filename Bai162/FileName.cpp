#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void Nhap(int[], int&);
void XoaSo(int[], int&, int);
void XoaChan(int[], int&);
void Xuat(int[], int);
int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	XoaChan(a, n);
	Xuat(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	cout << "Nhap cac phan tu trong mang:" << endl;
	for (int i = 0;i < n;i++)
	{
		cout << "A[" << i << "] =";
		cin >> a[i];
	}
}
void XoaSo(int a[], int& n, int k)
{
	for (int i = k;i <= n - 2;i++)
		a[i] = a[i + 1];
	n--;
}
void XoaChan(int a[], int& n)
{
	for (int i = n - 1;i >= 0;i--)
		if (a[i] % 2 == 0)
			XoaSo(a, n, i);
}
void Xuat(int a[], int n)
{
	cout << "Cac phan tu sau khi xoa so chan la:";
	for (int i = 0;i < n;i++)
		cout << a[i] << setw(4);
}
