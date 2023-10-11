#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int, int, int);

int main()
{
	int a[500], n, j, k;
	Nhap(a, n);

	cout << "\nXuat mang mot chieu: ";
	Xuat(a, n);

	cout << "\nNhap khoang trai: ";
	cin >> j; 
	cout << "\nNhap khoang phai: ";
	cin >> k;

	cout << "\nNhung gia tri chan trong khoang: ";
	LietKe(a, n, j, k);

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}

void LietKe(int a[], int n, int x, int y)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] >= x && a[i] <= y)
			if (a[i] % 2 == 0)
				cout << setw(10) << a[i];
}