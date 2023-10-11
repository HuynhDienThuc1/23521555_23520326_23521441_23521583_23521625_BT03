#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void nhap(int[], int&);
void xuat(int[], int);
bool ktrhoanthien(int);
int hoanthiendau(int[], int);
int timgiatri(int[], int);

int main()
{
	int a[500];
	int n;
	nhap(a, n);
	cout << "Mang ban dau la: ";
	xuat(a, n);
	cout << "Ket qua la: ";
	cout << timgiatri(a, n);

}

void nhap(int a[], int& n)
{
	cout << "Nhap n: ";
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

bool ktrhoanthien( int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			s = s + i;
		if (s = n)
			return true;
		return false;
	}
}

int hoanthiendau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktrhoanthien(a[i]))
			return a[i];
	return -1;
}

int timgiatri(int a[], int n)
{
	int lc = hoanthiendau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
		if (ktrhoanthien(a[i]) == 1 && a[i] < lc)
			lc = a[i];
	return lc;
}
