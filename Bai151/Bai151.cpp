#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void Nhap(int[], int&);
void XuLi(int[], int);
void Xuat(int[], int);
int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	XuLi(a, n);
	Xuat(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	cout << "Nhap cac phan tu trong mang:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "] =";
		cin >> a[i];
	}
}
void XuLi(int a[], int n)
{
	int vt = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 3 == 0)
		{
			swap(a[i], a[vt]);
			vt++;
		}
}
void Xuat(int a[], int n)
{
	cout << "Cac phan tu sau khi sap xep la:";
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(4);
}