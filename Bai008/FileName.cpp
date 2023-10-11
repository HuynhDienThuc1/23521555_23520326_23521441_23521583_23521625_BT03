#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int ChuSoDau(int);
void Nhap(int[], int&);
void LietKe(int[], int);
int main()
{
	int n;
	int a[500];
	Nhap(a, n);
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
int ChuSoDau(int n)
{
	int dt = abs(n);
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}
void LietKe(int a[], int n)
{
	for (int i = 0;i < n;i++)
		if (ChuSoDau(a[i]) % 2 != 0)
			cout << a[i] << setw(10);
}