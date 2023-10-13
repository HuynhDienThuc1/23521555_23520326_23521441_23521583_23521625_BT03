#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Tron(int[], int, int[], int, int[], int&);

int main()
{
	int a[100];
	int b[100];
	int c[500];
	int n, m, p;
	cout << "Nhap mang a: " << endl;
	Nhap(a, n);
	cout << "Nhap mang b: " << endl;
	Nhap(b, m);
	Tron(a, n, b, m, c, p);
	//for (int i = 0; i < p; i++)
		//cout << setw(4) << c[i];
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	//srand(time(NULL));
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void Tron(int a[], int n, int b[], int m, int c[], int& p)
{
	int i = 0;
	int j = 0;
	p = 0;
	while (i < n || j < m)
	{
		if ((a[i] < b[j] && i < n && j < m) || j >= m)
		{
			c[p++] = a[i++];
			cout << c[p - 1] << endl;
		}
		else
		{
			c[p++] = b[j++];
			cout << c[p - 1] << endl;
		}
	}
}