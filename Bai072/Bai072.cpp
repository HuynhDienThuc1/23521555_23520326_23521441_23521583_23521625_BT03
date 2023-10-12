#include <iostream>
using namespace std;

void Nhap(float[], int&);
int LonNhat(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << LonNhat(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
int LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}