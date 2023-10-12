#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&, float&);
int TanSuat(float[], int, float);
int main()
{
	int n;
	float a[500];
	float x;
	Nhap(a, n, x);
	TanSuat(a, n, x);
	return 0;
}
void Nhap(float a[], int& n, float& x)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	for (int i = 0;i < n;i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
int TanSuat(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0;i < n;i++)
		if (a[i] == x)
			dem++;
	cout << "Ket qua: " << dem;
	return dem;
}