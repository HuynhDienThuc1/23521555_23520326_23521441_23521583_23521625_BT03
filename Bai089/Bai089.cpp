#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
bool ktNguyento(int);
int NgToDautien(int a[], int);


int main()
{
	int A[30];
	int n;
	Nhap(A, n);
	cout << "So nguyen to dau tien trong mang la: " << NgToDautien(A, n);

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

bool ktNguyento(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

int NgToDautien(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ktNguyento(a[i]))
			return a[i];
	return 0;
}
