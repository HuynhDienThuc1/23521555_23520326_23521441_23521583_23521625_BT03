#include<iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
int ktCSC(float[], int);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	ktCSC(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
int ktCSC(float a[], int n)
{
	if (n <= 1)
		return 0;
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if ((a[i] - a[i + 1]) != (a[0] - a[1]))
			flag = 0;
	return flag;
}