#include <iostream>
#include <iomanip>
using namespace std;

void nhap(int[], int&);
void lietke(int[], int);
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
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;
	cout << "Nhap cac phan tu cua mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void lietke(int a[], int n)
{
	for (int l = 3; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			for (int i = 0; i < l; i++)
				cout << setw(3) << a[vt + i];
			cout << "\n";
		}
	}
}

void xuat(int a[], int n)
{
	cout << "cac mang do dai sau khi duoc liet ke tu 3 den 5 la: ";
	lietke(a, n);
}