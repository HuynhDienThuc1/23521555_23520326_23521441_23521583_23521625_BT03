#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
int DemPhanBiet(int[], int);
int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	DemPhanBiet(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0;i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
int DemPhanBiet(int a[], int n)
{
	int dem = 0;
	for (int i = 0;i < n;i++)
	{
		bool flag = true;
		for (int j = 0;j < i;j++)
			if (a[j] == a[i])
				flag = false;
		if (flag == true)
			dem++;
	}
	cout << "Ket qua: " << dem;
	return dem;
}