#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void Nhap(int[], int&);
bool NguyenTo(int);
void SapXepNguyenTo(int[], int);
void Xuat(int[], int);
int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	SapXepNguyenTo(a, n);
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
bool NguyenTo(int x)
{
	int dem = 0;
	for (int i = 1; i <= x; i++)
		if (x % i == 0)
			dem++;
	if (dem == 2)
		return 1;
	return 0;
}
void SapXepNguyenTo(int a[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (NguyenTo(a[i]) && NguyenTo(a[j]) && a[i] > a[j])
				swap(a[i], a[j]);
}
void Xuat(int a[], int n)
{
	cout << "Cac phan tu sau khi sap xep la:";
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(4);
}