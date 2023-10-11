#include <iostream>
using namespace std;

void Nhap(int[], int&, int&, int&);
int DauTien(int[], int, int, int);
int main()
{
	int a[500];
	int n, x, y;
	Nhap(a, n, x, y);
	cout << DauTien(a, n, x, y);
	return 0;
}

void Nhap(int a[], int& n, int& x, int& y)
{
	cin >> n;
	cin >> x;
	cin >> y;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
int DauTien(int a[], int n, int x, int y)
{
	for (int i = 0; i < n; i++)
		if (a[i] > x && a[i] < y)
			return a[i];
	return x;
}