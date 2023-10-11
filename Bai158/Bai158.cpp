#include <iostream>
using namespace std;
void Nhap(float[], int&);
void DichTrai(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	DichTrai(a, n);
	cout << "Sau khi dich: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << "  ";
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang: \n";
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
void DichTrai(float a[], int n)
{
	float temp = a[0];
	for (int i = 0; i <= n - 2; i++)
		a[i] = a[i + 1];
	a[n - 1] = temp;
}
