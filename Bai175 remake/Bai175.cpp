#include <iostream>
#include <iomanip>
void nhap(int[], int&);
void xuat(int[], int);
void TimCon(int[], int, int);
using namespace std;

int main()
{
	int n, a[100];
	nhap(a, n);
	xuat(a, n);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "nhap so luong chu so cua mang:";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]:";
		cin >> a[i];
	}
}

void xuat(int a[], int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << "mang co do dai " << " " << i << " " << " la:";
		TimCon(a, n, i);
	}
}

void TimCon(int a[], int n, int i)
{
	for (int j = 0; j <= n - i; j++)
	{
		int vt = 0;
		while (vt < i)
		{
			cout << " " << a[j + vt];
			vt++;
		}
		cout << endl;
	}
}

