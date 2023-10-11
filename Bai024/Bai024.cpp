#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
void LietKe(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}

void Nhap(float a[], int& nn)
{
	cout << "Nhap n:";
	cin >> nn;
	cout << "Nhap cac phan tu cua mang:\n";
	for (int i = 0; i < nn; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

void LietKe(float a[], int n)
{
	if (n == 1)
		return;
	if (a[0] * a[1] < 0)
		cout << setw(8) << a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i] * a[i + 1] < 0 || a[i] * a[i - 1] < 0)
			cout << setw(8) << a[i];
	if (a[n - 1] * a[n - 2] < 0)
		cout << setw(8) << a[n - 1];
}