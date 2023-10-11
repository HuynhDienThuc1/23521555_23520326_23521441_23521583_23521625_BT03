#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&, int&);
void Xuat(int[], int, int);
void XuatCon(int[], int, int);
int main()
{
	int n;
	int l;
	int a[500];
	Nhap(a, n, l);
	XuatCon(a, n, l);
	Xuat(a, n, l);
	return 0;
}
void Nhap(int a[], int& n, int& l)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
void Xuat(int a[], int n, int l)
{
	cout << "Ket qua: ";
	for (int i = 0; i < n;i++)
		cout << a[i] << " ";
}
void XuatCon(int a[], int n, int l)
{
	for (int vt = 0;vt <= n - l;vt++)
	{
		cout << endl;
		XuatCon(a, n, l);
	}
}