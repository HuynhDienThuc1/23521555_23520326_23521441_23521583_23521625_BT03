#include<iostream>
#include<cmath>
using namespace std;
void Nhap(int[], int&);
int DemGiaTri(int[], int);
int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	cout << "So luong gia tri co chu so tan cung bang 5 la: " << DemGiaTri(a, n);
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
int DemGiaTri(int a[], int n)
{
	int dem = 0;
	for (int i = 0;i < n;i++)
		if (abs(a[i]) % 10 == 5)
			dem++;
	return dem;
}