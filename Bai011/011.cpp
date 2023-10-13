#include <iostream>
#include <iomanip>
using namespace std;

void nhap(int[], int&);
bool ktdang3m(int n);
void lietke(int[], int);
void xuat(int[], int);

int main()
{
	int a[500];
	int n;
	nhap(a, n);
	xuat(a, n);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap cac phan tu cua mang:\n" << endl;
	for(int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

bool ktdang3m(int n)
{
	while (n < 1)
		return false;
	bool flag = true;
	int t = n;
	while (t > 1)
	{
		if (t % 3 != 0)
			flag = false;
		t /= 3;
	}
	return flag;
}

void lietke(int a[], int n)
{
	cout << "cac so co dang 3^m la: ";
	for (int i = 0; i <= n - 1; i++)
	{
		if (ktdang3m(a[i]) == true)
			cout << a[i] << " ";
	}
}

void xuat(int a[], int n)
{
	lietke(a, n);
}