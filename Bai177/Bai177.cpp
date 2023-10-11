#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktCon(int[], int, int, int);
void Lietke(int[], int);

int main()
{
	int A[500];
	int n;

	Nhap(A, n);

	cout << "\nXuat mang ban dau: " << endl;
	Xuat(A, n);


	cout << "\nCac day con tang la: " << endl;
	Lietke(A, n);

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(5) << a[i];
}

int ktCon(int a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 2; i++)
		if (a[vt + i] > a[vt + i + 1])
			flag = 0;
	return flag;
}

void Lietke(int a[], int n)
{
	for (int l = 1; l <= n; l++)
	{
		for (int vt = 0; vt <= n - 1; vt++)
		{
			if (ktCon(a, n, vt, l) == 1)
			{
				for (int i = 0; i <= l - 1; i++)
					cout << setw(5) << a[vt + i];
				cout << "\n";
			}
		}
	}
}