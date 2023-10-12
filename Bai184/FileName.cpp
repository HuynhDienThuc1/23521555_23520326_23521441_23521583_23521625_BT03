#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void Nhap(int[], int&);
int DemMang(int[], int, int[], int);
int main()
{
	int n,m;
	int a[500],b[500];
	cout << "Nhap mang thu nhat:"<<endl;
	Nhap(a, n);
	cout << "Nhap mang thu hai:"<<endl;
	Nhap(b, m);
	cout << "So lan xuat hien cua mang a trong mang b la:" << DemMang(a, n, b, m);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so luong phan tu:";
	cin >> n;
	cout << "Nhap cac phan tu trong mang:" << endl;
	for (int i = 0;i < n;i++)
	{
		cout << "Phan tu thu " << i << " la:";
		cin >> a[i];
	}
}
int DemMang(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int dem = 0;
	for (int i = 0;i <= m - n;i++)
	{
		int flag = 1;
		for (int j = 0;j < n;j++)
			if (a[j] != b[i+j])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}