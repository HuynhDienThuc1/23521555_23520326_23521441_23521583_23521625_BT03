#include <iostream>
#include <cmath>

using namespace std;

void Nhap(float[], int&);
float Lonnhat(float[], int);
void Lietke(float[], int);

int main()
{
	int n;
	float a[500];
	Nhap(a, n);
	cout << "Vi tri chua gia tri lon nhat: ";
	Lietke(a, n);
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
float Lonnhat(float a[],int n)
{
	int ln = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > ln)
			ln = a[i];
	return ln;
}
void Lietke(float a[], int n)
{
	float lk= Lonnhat(a, n);
	for (int i = 0; i < n; i++)
		if (a[i] == lk)
			cout << i<<" ";

}
