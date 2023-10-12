#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&, float& x);
float XaNhat(float[], int n, float x);
int main()
{
	float a[500];
	int n;
	float x;
	Nhap(a, n, x);
	XaNhat(a, n, x);
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
float XaNhat(float a[], int n, float x)
{
	float lc = a[0];
	for (int i = 0;i < n;i++)
		if (abs(a[i] - x) > abs(lc - x))
			lc = a[i];
	cout << "Ket qua: " << lc;
	return lc;
}