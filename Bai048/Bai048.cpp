#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
float TichDuong(float[], int);
int Demduong(float[], int);
float TrungBinhNhan(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << TrungBinhNhan(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
float TichDuong(float a[], int n)
{
	float t = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			t *= a[i];
	}
	return t;
}
int DemDuong(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			dem++;
	}
	return dem;
}
float TrungBinhNhan(float a[], int n)
{
	float t = TichDuong(a, n);
	int dem = DemDuong(a, n);
	if (dem == 0)
		return 0;
	return pow(t, (float)1 / dem);
}