#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void Nhap(float[], int&);
int TimViTri(float[], int);
int main()
{
	int n;
	float a[500];
	Nhap(a, n);
	cout << "Vi tri cua gia tri nho nhat:" << TimViTri(a, n);
	return 0;
}
void Nhap(float a[], int& n)
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
int TimViTri(float a[], int n)
{
	int lc = 0;
	for (int i = 0;i < n;i++)
		if (a[i] < a[lc])
			lc = i;
	return lc;
}