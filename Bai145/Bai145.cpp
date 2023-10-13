#include <iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void HoanVi(float&, float&);
void TangDan(float[], int);
void GiamDan(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << " Cac so duong cua mang sau khi duoc sap xep: ";
	TangDan(a, n);
	cout << "\nCac so am cua mang sau khi duoc sap xep: ";
	GiamDan(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:";
		cin >> a[i];
	}
}

void HoanVi(float& i, float& j)
{
	if (i > j)
	{
		float temp = i;
		i = j;
		j = temp;
	}
}


void TangDan(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] > 0 && a[j] > 0 && a[i] > a[j])
				HoanVi(a[i], a[j]);
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
}

void GiamDan(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] < 0 && a[j] < 0 && a[i] < a[j])
				HoanVi(a[i], a[j]);
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
}