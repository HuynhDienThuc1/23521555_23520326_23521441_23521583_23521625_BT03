#include<iostream>
#include<iomanip>
using namespace std;

void nhap(float [], int& );
void xuat(float [], int);
void lietke(float[], int, int, int);

int main()
{
	float a[100];
	int n, x, y;
	nhap(a, n);
	cout << "Nhap x: ";
    cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Mang ban dau: ";
	xuat(a, n);
	cout << "Cac phan tu nam trong[" << x << " " << y << "]: ";
	lietke(a, n, x, y);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
	cout << endl;
}

void lietke(float a[], int n, int x, int y)
{
	for (int i = 0; i < n; i++)
		if (a[i] >= x && a[i] <= y)
			cout << a[i] << " ";
}