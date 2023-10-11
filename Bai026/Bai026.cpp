#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void LietKe(float[], int );

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	LietKe(a, n);
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
void LietKe(float a[], int n)
{
	if (n == 1)
		return;
	if (a[0]<a[1] || a[0]>a[1])
		cout << a[0] << endl;
	for (int i = 1; i <= n - 2; i++)
	{
		//cout << a[i];
		if ((a[i] > a[i + 1] && a[i] > a[i - 1]) || (a[i] < a[i + 1] && a[i] < a[i - 1]))
			cout << a[i] << endl;
	}
	if (a[n - 1]<a[n - 2] || a[n - 1] > a[n - 2])
		cout << a[n - 1];
}