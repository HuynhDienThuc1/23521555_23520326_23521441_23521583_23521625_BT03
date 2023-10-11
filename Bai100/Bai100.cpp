#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
float AmLonNhat(float[], int);

int main()
{
	float A[30];
	int n;
	Nhap(A, n);
	cout << "Gia tri am lon nhat la: " << AmLonNhat(A, n);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

float AmDau(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] < 0)
			return a[i];
	return 0;
}

float AmLonNhat(float a[], int n)
{
	float lc = AmDau(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i <= n - 1; i++)
		if (lc < a[i] && a[i] < 0)
			lc = a[i];
	return lc;
}