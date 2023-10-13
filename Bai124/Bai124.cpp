#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void nhap(int[], int&);
void xuat(int[], int);
int ktrchanle(int[], int);

int main()
{
	int a[500];
	int n;
	nhap(a, n);
	cout << "Mang ban dau la: ";
	xuat(a, n);
	if (ktrchanle(a, n))
		cout << "Mang co tinh chan le 111 !! ";
	else
		cout << "Mang khong co tinh chan le 000 !! ";
	return 0;
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

int ktrchanle(int a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n - 1; i++)
		if ((a[i] + a[i + 1]) % 2 == 0)
			flag = 0;
	return flag;
}