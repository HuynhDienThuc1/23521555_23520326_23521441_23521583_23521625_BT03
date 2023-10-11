#include <iostream>
#include <iomanip>
void nhap(float[], int&);
void lietke(float[], int);
using namespace std;

int main()
{
	float a[100];
	int n;
	nhap(a, n);
	lietke(a, n);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "nhap so luong so cua mang:";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]:";
		cin >> a[i];
	}
}

void lietke(float a[], int n)
{
	cout << "cac bo so thoa man dieu kien la:";
	for (int i = 0; i <= n - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			for (int k = 0; k <= n - 1; k++)
				if ((i != k) && (i != j) && (k != j) && (a[i] == a[j] + a[k]))
					cout << "(" << a[i] << "," << a[j] << "," << a[k] << ")";
}

