#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int ktToanChan(int[], int);
int LeNhoNhat(int[], int);
int ChanLonNhat(int[], int);

int main()
{
	int A[30];
	int n;
	Nhap(A, n);
	cout << "So chan lon nhat: " << ChanLonNhat(A, n);

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

int ktToanChan(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 != 0)
			return a[i];
	
	return 0;
}

int LeNhoNhat(int a[], int n)
{
	int lc = ktToanChan(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 != 0 && lc > a[i])
			lc = a[i];

	return lc;
}

int ChanLonNhat(int a[], int n)
{
	int lc = LeNhoNhat(a, n);
	if (lc == 0)
		return -1;
	return lc - 1;
}