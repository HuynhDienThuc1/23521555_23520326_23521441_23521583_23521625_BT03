#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);
void XoaTrungX(float[], int&, float);

int main()
{
	float A[500], x;
	int n;

	Nhap(A, n);

	cout << "Nhap gia tri x: ";
	cin >> x;

	cout << "\nXuat mang ban dau: " << endl;
	Xuat(A, n);

	XoaTrungX(A, n, x);

	cout << "\nMang sau khi xoa x = " << x <<": " << endl;
	Xuat(A, n);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(5) << a[i];
}

void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

void XoaTrungX(float a[], int& n, float x)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			XoaViTri(a, n, i);
}