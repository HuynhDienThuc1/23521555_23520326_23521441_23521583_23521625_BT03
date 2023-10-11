#include <iostream>
#include <iomanip>
void nhap(float[], int&);
float CuoiCung(float[], int);
using namespace std;

int main()
{
	int n;
	float a[100];
	nhap(a, n);
	cout << "gia tri am cuoi cung lon hon -1 la:" << CuoiCung(a, n);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "nhap so luong chu so cua mang:";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]:";
		cin >> a[i];
	}
}

float CuoiCung(float a[], int n)
{
	for (int i= n-1; i >=0; i--)
		if (a[i]<0 && a[i]>-1)
			return a[i];
	return 0;
}