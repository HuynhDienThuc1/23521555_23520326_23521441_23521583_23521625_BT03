#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int ktCSC(float[], int);

int main()
{
	float a[500];
	int n;

	Nhap(a, n);

	cout << "\nXuat mang mot chieu: ";
	Xuat(a, n);
	cout << "\nKet qua la: ";
	LietKe(a, n);
	cout << "\n\n\n Ket thuc!!!";

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
int ktCSC(float a[], int n)
{
	if (n <= 1)
		return 0;
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if ((a[i] - a[i + 1]) != (a[0] - a[1]))
			flag = 0;
	return flag;
}