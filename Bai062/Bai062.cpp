#include <iostream>
#include <cmath>

using namespace std;

void Nhap(float[], int&);
float Dem(float[], int);
float Cucdai(float[], int);
float Demcuctri(float[], int);

int main()
{
	int n;
	float a[500];
	Nhap(a, n);
	cout << "Dem= " << Demcuctri(a, n);
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
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] < a[1])
		dem = dem + 1;
	for (int i = 1; i <= n - 2; i++)
		if (a[i] < a[i + 1] && a[i] < a[i - 1])
			dem = dem + 1;
	if (a[n - 1] < a[n - 2])
		dem = dem + 1;
	return dem;
}
float Cucdai(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] > a[1])
		dem = dem + 1;
	for (int i = 1; i <= n - 2; i++)
		if (a[i] > a[i + 1] && a[i] > a[i - 1])
			dem = dem + 1;
	if (a[n - 1] > a[n - 2])
		dem = dem + 1;
	return dem;
}
float Demcuctri(float a[], int n)
{
	int dem = Dem(a, n) + Cucdai(a, n);
	return dem;
}