#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
void DaoMang(float[], int);
void DaoDuong(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	cout << "Mang sau khi dao la: ";
	DaoMang(a, n);
	cout << "Cac gia tri cua mang sau sap xep la: ";
	DaoDuong(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:";
		cin >> a[i];
	}
}

void DaoMang(float a[], int n)
{
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		float temp = a[d];
		a[d] = a[c];
		a[c] = temp;
		d++;
		c--;
	}
}

void DaoDuong(float a[], int n)
{
	float b[100];
	int k;
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			b[k++] = a[i];
	DaoMang(b, k);
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			a[i] = b[k++];
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
}

void Xuat(int a[], int n)
{

}