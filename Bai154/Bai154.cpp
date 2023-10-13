#include <iostream>
using namespace std;

void nhap(float[], int&);
void daomang(float[], int);
void xuat(float[], int);

int main()
{
	int n;
	float a[500];
	nhap(a, n);
	xuat(a, n);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "nhap vao so luong phan tu cua mang a: ";
	cin >> n;
	cout << "nhap vao cac phan tu cua mang a:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

void daomang(float a[], int n)
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

void xuat(float a[], int n)
{
	daomang(a, n);
	cout << "mang a sau khi duoc dao la: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}