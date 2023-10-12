#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void Nhap(int[], int&);
bool KiemTra(int[], int);
int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	if (KiemTra(a, n))
		cout << "Ton tai hai gia tri khong lien tiep";
	else
		cout << "Khong ton tai hai gia tri khong ien tiep";
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
bool KiemTra(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] == 0 && a[i + 1] == 0)
			flag = 1;
	return flag;
}