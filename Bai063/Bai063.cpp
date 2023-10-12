#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void Nhap(int[], int&);
int TanSuat(int[], int, int);
void LietKe(int[], int);
int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	cout << "Cac gia tri xuat hien 1 lan : ";
	LietKe(a, n);
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
void LietKe(int a[], int n)
{
	for (int i = 0;i < n;i++)
		if (TanSuat(a, n, a[i]) == 1)
			cout << a[i] << setw(4);
}