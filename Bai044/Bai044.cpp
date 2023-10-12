#include <iostream>
using namespace std;

void nhap(int[], int&);
int tongcuctieu(int[], int);
int tongcucdai(int[], int);
int tongcuctri(int[], int);
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
	cout << "nhap vao so luong phan tu cua mang: ";
	cin >> n;
	cout << "nhap cac phan tu cua mang:\n";
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

int tongcucdai(int a[], int n)
{
	if (n <= 1)
		return 0;
	int s = 0;
	if (a[0] > a[1])
		s += a[0];
	for (int i = 1; i <= n - 1; i++)
	{
		if (a[i - 1] < a[i] && a[i] > a[i + 1])
			s += a[i];
	}
	if (a[n - 2] < a[n - 1])
		s += a[n - 1];
	return s;
}

int tongcuctieu(int a[], int n)
{
	if (n <= 1)
		return 0;
	int s = 0;
	if (a[0] < a[1])
		s += a[0];
	for (int i = 1; i <= n - 1; i++)
	{
		if (a[i - 1] > a[i] && a[i] < a[i + 1])
			s += a[i];
	}
	if (a[n - 2] > a[n - 1])
		s += a[n - 1];
	return s;
}

int tongcuctri(int a[], int n)
{
	return tongcucdai(a, n) + tongcuctieu(a, n);
}

void xuat(int a[], int n)
{
	cout << "tong cac gia tri cuc tri la:" << tongcuctri(a, n);
}