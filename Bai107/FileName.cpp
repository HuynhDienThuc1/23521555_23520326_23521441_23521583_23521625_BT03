#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void Nhap(int[], int&);
int TanSuat(int[], int, int);
int TimKiem(int[], int);
int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	cout << "Gia tri cos so lan suat hien nhieu nhat la:" << TimKiem(a, n);
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
int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0;i < n;i++)
		if (a[i] == x)
			dem++;
	return dem;
}
int TimKiem(int a[], int n)
{
	int lc = a[0];
	for (int i = 0;i < n;i++)
		if (TanSuat(a, n, a[i]) > TanSuat(a, n, lc))
			lc = a[i];
	return lc;
}
