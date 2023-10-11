#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void nhap(int[], int&);
void xuat(int[], int);
void daomang(int[], int);
void daochan(int[], int);
void daole(int[], int);
void daochanle(int[], int);

int main()
{
	int a[500];
	int n;
	nhap(a, n);
	cout << "Mang ban dau la: ";
	xuat(a, n);
	cout << "Mang sau khi tron la: ";
	daochanle(a, n);
	xuat(a, n);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]=";
		cin >> a[i];
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

void daomang(int a[], int n)
{
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		int temp = a[d];
		a[d] = a[c];
		a[c] = temp;
		d++;
		c--;
	}
}

void daochan(int a[], int n)
{
	int b[500];
	int k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			b[k++] = a[i];
	daomang(b, k);
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			a[i] = b[k++];
}

void daole(int a[], int n)
{
	int b[500];
	int k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			b[k++] = a[i];
	daomang(b, k);
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			a[i] = b[k++];
}

void daochanle(int a[], int n)
{
	daochan(a, n);
	daole(a, n);
}