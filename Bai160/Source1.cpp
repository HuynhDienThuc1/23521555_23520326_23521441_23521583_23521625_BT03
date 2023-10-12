#include <iostream>
#include <cmath>

using namespace std;

void Nhap(float[], int&);
void Xoavitri(float[], int&, int);
int main()
{
	int n;
	float a[500];
	Nhap(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xoavitri(float a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}