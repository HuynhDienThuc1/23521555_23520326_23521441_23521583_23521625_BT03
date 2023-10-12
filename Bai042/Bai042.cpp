#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
float TongGiaTri(float[], int);
int main()
{
	int n;
	float a[500];
	Nhap(a, n);
	TongGiaTri(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
float TongGiaTri(float a[], int n)
{
	float s = 0;
	for (int i = 0;i <= n - 2;i++)
		if (a[i] > abs(a[i + 1]))
			s = s + a[i];
	cout << "Ket qua: " << s;
	return s;
}