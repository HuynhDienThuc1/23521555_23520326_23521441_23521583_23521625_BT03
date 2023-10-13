#include <iostream>
#include <cmath>

using namespace std;

void Nhap(int[], int&);
bool Vitrile(int);
int Sapxep(int[], int);

int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	if (Sapxep(a, n) == 0)
		cout << "Mang khong ton tai gia tri khong";
	else
		cout << "Mang ton tai";
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

int Sapxep(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] == 0)
			return 1;
		else
			return 0;
}