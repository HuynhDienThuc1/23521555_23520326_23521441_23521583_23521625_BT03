#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
int ucln(int, int);
int TimUCLN(int[], int);
int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	TimUCLN(a, n);
	cout << "Ket qua: " << TimUCLN(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
int ucln(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return (a + b);
}
int TimUCLN(int a[], int n)
{
	int lc = a[0];
	for (int i = 0;i < n;i++)
		lc = ucln(lc, a[i]);
	return lc;
}