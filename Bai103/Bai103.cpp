#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int ChanDau(int[], int);
int ChanNhoNhat(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	if (ChanNhoNhat(a, n) != -1)
		cout << "Gia tri chan nho nhat la: " << ChanNhoNhat(a, n);
	else
		cout << "Khong ton tai gia tri chan.";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	//srand(time(NULL));
	cout << "Nhap mang: \n";
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}
int ChanDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			return a[i];
	return -1;
}
int ChanNhoNhat(int a[], int n)
{
	int lc = ChanDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0 && a[i] < lc)
			lc = a[i];
	return lc;
}