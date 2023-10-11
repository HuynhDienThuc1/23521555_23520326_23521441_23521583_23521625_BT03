#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
float DuongCuoi(float[], int);
int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	DuongCuoi(a, n);
	cout << "Ket qua: " << DuongCuoi(a, n);
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
float DuongCuoi(float a[], int n)
{
	for (int i = n - 1;i >= 0;i--)
		if (a[i] > 0)
			return a[i];
	return 0;
}