#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int); 
void ThemViTri(int[], int&, int, int);
void Xuat(int[], int);

int main()
{
	int b[100];
	int m, x, k;
	Nhap(b, m);

	cout << "\nMang ban dau: ";
	Xuat(b, m);

	cout << "\nNhap x: ";
	cin >> x;
	cout << "Nhap K: ";
	cin >> k;

	ThemViTri(b, m, x, k);
	cout << "\nSau khi them " << x << " vao vi tri " << k << ": \n";
	Xuat(b, m);
	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}

void ThemViTri(int a[], int& n, int xx, int kk)
{
	for (int i = n; i >= kk + 1; i--)
		a[i] = a[i - 1];
	a[kk] = xx;
	n++;
}
