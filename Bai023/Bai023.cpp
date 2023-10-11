#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void LietKe(int[], int);

int main()
{
	int A[30];
	int n;
	Nhap(A, n);
	LietKe(A, n);

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

void LietKe(int a[], int n)
{
	if (n <= 1)
		return;

	if (a[0] % 2 == 0 && a[1] % 2 == 0)
		cout << "a[0]: " << a[0] << endl;

	for (int i = 1; i <= n - 2; i++)
		if (a[i] % 2 == 0)
			if (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0)
				cout << "a[" << i << "]: " << a[i] << endl;

	if (a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
		cout << "a[" << n - 1 << "]: " << a[n - 1] << endl;
}
