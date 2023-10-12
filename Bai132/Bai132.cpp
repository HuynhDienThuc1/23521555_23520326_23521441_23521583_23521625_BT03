#include <iostream>
using namespace std;

void nhap(int[], int&);
void xaydung(int[], int, int[], int&);
void xuat(int[], int, int[], int&);

int main()
{
	int n, k;
	int a[500], b[500];
	nhap(a, n);
	xuat(a, n, b, k);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;
	cout << "Nhap cac phan tu cua mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void xaydung(int a[], int n, int b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
		{
			b[k] = a[i];
			k++;
		}
}

void xuat(int a[], int n, int b[], int& k)
{
	xaydung(a, n, b, k);
	for (int i = 0; i < k; i++)
		cout << b[i] << " ";
}