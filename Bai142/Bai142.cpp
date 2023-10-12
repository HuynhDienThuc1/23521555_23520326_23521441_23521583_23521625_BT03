#include <iostream>
#include <iomanip>
void nhap(float[], int&);
void HoanVi(float&, float&);
void DuongTang(float[], int);
void xuat(float[], int);
using namespace std;

int main()
{
	int n;
	float a[100];
	nhap(a, n);
	DuongTang(a, n);
	xuat(a, n);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "nhap so luong chu so cua mang:";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]:";
		cin >> a[i];
	}
}

void HoanVi(float& a, float& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

void DuongTang(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] > 0 && a[j] > 0 && a[i] > a[j])
				HoanVi(a[i], a[j]);
}

void xuat(float a[], int n)
{
	cout << "mang sau hoan vi la:";
	for (int i = 0; i < n; i++)
	{
		cout << " a[" << i << "]:" << a[i] << setw(4);
	}
}