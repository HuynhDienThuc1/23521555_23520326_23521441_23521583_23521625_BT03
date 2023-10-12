#include <iostream>
#include <cmath>

using namespace std;

void Nhap(int[], int&);
float Demsoluong(int[], int);

int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	cout << "Dem= " << Demsoluong(a, n);
	return 0;
}
void Nhap(int a[], int& n)
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

float Demsoluong(int a[], int n)
{
	int dem = 0;

	for (int i = 0; i < n; i++)
		if (a[i] > 0 && a[i] % 7 == 0)
			dem++;

	return dem;
}