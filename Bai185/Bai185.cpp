#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int, int&, int&);
void Xuat(float[], int, int, int);
int ktCon(float[], int, int, int);
void DuongDaiNhat(float[], int, int&, int&);
int main()
{
	int n, vt, l, vtd, vtc;
	float a[500];
	Nhap(a, n, vt, l);
	DuongDaiNhat(a, n, vtd, vtc);
	Xuat(a, n, vt, l);
	return 0;
}
void Nhap(int a[], int n, int& vt, int& l)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
void Xuat(int a[], int n, int vt, int l)
{
	cout << "Ket qua: ";
	for (int i = 0; i < n;i++)
		cout << a[i] << " ";
}
int ktCon(float a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 1; i++)
		if (a[vt + i] <= 0)
			flag = 0;
	return flag;
}
void DuongDaiNhat(float a[], int n, int& vtd, int& vtc)
{
	for (int l = n; l >= 1; l--)
		for (int vt = 0; vt <= n - l; vt++)
			if (ktCon(a, n, vt, l) == 1)
			{
				vtd = vt;
				vtc = vt + l - 1;
				return;
			}
	vtd = vtc = -1;
}