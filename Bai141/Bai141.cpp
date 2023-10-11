#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int&);
bool ktHoanThien(int);
void HoanThienGiam(int[], int);

int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	HoanThienGiam(a, n);
	Xuat(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int& n)
{
	cout << "Ket qua: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}

void HoanThienGiam(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (ktHoanThien(a[i]) && ktHoanThien(a[j]) && a[i] < a[j])
				swap(a[i], a[j]);
}