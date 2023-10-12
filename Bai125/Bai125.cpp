#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
int KtTang(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	if (KtTang(a, n))
		cout << "Mang tang dan.";
	else
		cout << "Mang khong tang dan.";
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	cout << "Nhap mang: \n";
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}
int KtTang(float a[], int n)
{
	int flag = 1;
	for (int i = 1; i < n; i++)
	{
		if (a[i] < a[i - 1])
			flag = 0;
	}
	return flag;
}