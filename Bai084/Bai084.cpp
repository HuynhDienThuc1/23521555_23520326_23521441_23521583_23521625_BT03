#include <iostream>
#include <cmath>

using namespace std;

void Nhap(float[], int&);
float Dem(float[], int);

int main()
{
	int n;
	float a[500];
	Nhap(a, n);
	cout << "dem=  " << Dem(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "] = ";
		cin >> a[i];
	}
}

float Dem(float a[], int n)
{
	if (n <= 2)
		return -1;
	int dem = 0;
	for (int i = 1; i <= n - 2; i++)
		if (a[i] == (a[i + 1] * a[i - 1]))
			return i;
}
