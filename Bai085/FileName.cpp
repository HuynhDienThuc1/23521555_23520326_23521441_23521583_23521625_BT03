#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void Nhap(int[], int&);
int ChanCuoiCung(int[], int);
int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	int flag = ChanCuoiCung(a, n);
	if (flag != -1)
		cout << "So chan cuoi cung la:" << flag;
	else
		cout << "Mang khong co gia tri chan";
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
int ChanCuoiCung(int a[], int n)
{
	for (int i = n - 1;i >= 0;i--)
		if (a[i] % 2 == 0)
			return a[i];
	return -1;
}
