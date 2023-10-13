#include <iostream>
#include <cmath>

using namespace std;

void Nhap(int[], int&);
void Sapxep(int[], int);
void Xuat(int[], int);

int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	Sapxep(a, n);
	cout << "Mang sau khi sap xep: ";
	Xuat(a, n);
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

void Sapxep(int a[], int n)
{
	int vt = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == 1)
		{
			float temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt++;
		}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}