#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void Nhap(int[], int&);
int ViTri(int[], int);
int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	cout << "Vi tri so chan dau tien la:" << ViTri(a, n);
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
int ViTri(int a[], int n)
{
	for (int i = 0;i < n;i++)
		if (a[i] % 2 == 0)
			return i;
	return -1;
}
