#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int DemGiaTri(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << DemGiaTri(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang: \n";
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}
int DemGiaTri(int a[], int n)
{
	///
	int dem = 0;
	if (n <= 1)
		return 0;
	if (a[0] % 2 == 0 && a[1] % 2 == 0)
		dem++;
	for (int i = 1; i < n - 1; i++)
	{
		if ((a[i] % 2 == 0 && a[i + 1] % 2 == 0) || (a[i] % 2 == 0 && a[i - 1] % 2 == 0))
			dem++;
	}
	if (a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
		dem++;
	return dem;
}