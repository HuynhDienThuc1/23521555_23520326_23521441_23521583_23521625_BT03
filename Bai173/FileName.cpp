#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void Nhap(int[], int&, int&, int&);
void XuatMangCon(int[], int, int, int);
int main()
{
	int n,l,vt;
	int a[500];
	Nhap(a, n ,l ,vt);
	XuatMangCon(a, n, l, vt);
	return 0;
}
void Nhap(int a[], int& n, int& l,int& vt)
{
	cout << "Nhap n:";
	cin >> n;
	cout << "Nhap cac phan tu trong mang:" << endl;
	for (int i = 0;i < n;i++)
	{
		cout << "A[" << i << "] =";
		cin >> a[i];
	}
	cout << "Nhap do dai mang con:";
	cin >> l;
	cout << "Nhap vi tri bat dau mang con:";
	cin >> vt;
}
void XuatMangCon(int a[], int n, int l, int vt)
{
	cout << "Mang con la:";
	for (int i = vt;i < l+vt;i++)
		cout << a[i] << setw(4);
}
