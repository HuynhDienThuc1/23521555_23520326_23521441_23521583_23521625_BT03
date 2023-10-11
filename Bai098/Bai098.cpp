#include <iostream>
#include <iomanip>
void nhap(float[], int&);
float DuongDau(float[], int);
float DuongNhoNhat(float[], int);
using namespace std;

int main()
{
	int n;
	float a[100];
	nhap(a, n);
	cout << "gia tri duong nho nhat la:" << DuongNhoNhat(a, n);
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

float DuongDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			return a[i];
	}
	return 0;
}

float DuongNhoNhat(float a[], int n)
{
	float lc = DuongDau(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0 and a[i] < lc)
			lc = a[i];
	return lc;
}