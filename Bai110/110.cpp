#include <iostream>
using namespace std;

void nhap(int[], int&);
bool nguyento(int);
int max(int[], int);
int timso(int[], int);
void xuat(int[], int);

int main()
{
	int n;
	int a[500];
	nhap(a, n);
	xuat(a, n);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap vao so phan tu cua mang: ";
	cin >> n;
	cout << "Nhap vao cac phan tu cua mang:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

bool nguyento(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

int max(int a[], int n)
{
	int max = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}

int timso(int a[], int n)
{
	int lc = max(a, n) + 1;
	while (nguyento(lc) == false)
		lc++;
	return lc;
}

void xuat(int a[], int n)
{
	cout << "So nguyen to do la: " << timso(a, n);
}