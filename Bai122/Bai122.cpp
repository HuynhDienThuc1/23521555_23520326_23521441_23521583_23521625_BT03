#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int ktToanChan(int[], int);

int main()
{
	int A[30];
	int n;
	Nhap(A, n);
	cout << "Kiem tra toan chan: " << ktToanChan(A, n);

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
	int flag = 1;
	for (int i = 0; i <= n; i++)
		if (a[i] % 2 != 0)
			flag = 0;

	return flag;
}