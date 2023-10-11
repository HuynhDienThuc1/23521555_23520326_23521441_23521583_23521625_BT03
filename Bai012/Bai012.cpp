#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Lietke(float[], int);

int main()
{
	float A[30];
	int n;
	Nhap(A, n);
	Lietke(A, n);

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

void Lietke(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		if (a[i] < 0)
		{
			cout << "Vi tri: " << i << endl;
			dem = dem + 1;
		}
	}
	if (dem == 0)
		cout << "Mang khong co gia tri am. ";
}