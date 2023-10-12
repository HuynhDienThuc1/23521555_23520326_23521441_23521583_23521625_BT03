#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void DaoMang(int[], int);
void DaoChan(int[], int);

int main()
{
	int A[500];
	int n;

	Nhap(A, n);

	cout << "\nXuat mang ban dau: " << endl;
	Xuat(A, n);

	DaoChan(A, n);

	cout << "\nMang sau khi sap xep: " << endl;
	Xuat(A, n);

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


void DaoMang(int a[], int n)
{
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		int temp = a[d];
		a[d] = a[c];
		a[c] = temp;
		d++;
		c--;
	}
}

void DaoChan(int a[], int n)
{
	int b[30];
	int k = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0)
			b[k++] = a[i];

	DaoMang(b, k);

	k = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0)
			a[i] = b[k++];
}