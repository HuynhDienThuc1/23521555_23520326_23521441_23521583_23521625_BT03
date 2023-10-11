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
	cout << "Gia tri x la: " << "[" << -AmLonNhat(A, n) << "," << AmLonNhat(A, n) << "]";

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

float AmLonNhat(float a[], int n)
{
	float lc = 0;
	for (int i = 0; i <= n - 1; i++)
		if (lc < abs(a[i]))
			lc = abs(a[i]);
	return lc;
}