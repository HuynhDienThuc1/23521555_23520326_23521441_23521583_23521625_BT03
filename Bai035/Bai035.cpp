#include <iostream>
using namespace std;
void Nhap(int[], int&);
int HangChuc(int);
int TongGiaTri(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout<< TongGiaTri(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap cac gia tri cua mang: ";
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

int HangChuc(int nn)
{
	int t = abs(nn);
	return (t / 10) % 10;
}

int TongGiaTri(int a[], int n)
{
	int s = 0;
	for (int i = 0; i <= ( n - 1); i++)
	{
		if (HangChuc(a[i]) == 5)
			s = s + a[i];
	}
	return s;
}