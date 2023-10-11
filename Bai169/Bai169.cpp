#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void ThemViTri(int[], int&, int, int);
void Xuat(int[], int);

int main()
{
	int a[100];
	int n, x, k;
	Nhap(a, n);
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap K: ";
	cin >> k;
	ThemViTri(a, n, x, k);
	cout << "Sau khi them " << x << " vao vi tri " << k << ": ";
	Xuat(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang: \n";
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}
void ThemViTri(int a[], int& n, int x, int k)
{
	for (int i = n; i >= k + 1; i--)
		a[i] = a[i - 1];
	a[k] = x;
	n++;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}