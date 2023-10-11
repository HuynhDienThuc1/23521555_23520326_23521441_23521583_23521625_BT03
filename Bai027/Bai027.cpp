#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float AmDau(float[], int);
void LietKe(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);

	cout << "\nXuat mang mot chieu: ";
	Xuat(a, n);

	cout << "\nVi tri co gia tri giong nhu so am dau tien: ";
	LietKe(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}

float AmDau(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] < 0)
			return a[i];
	return 0;
}

void LietKe(float a[], int n)
{
	float ad = AmDau(a, n);
	if (ad == 0)
	{
		cout << "\nKhong co gia tri am";
		return;
	}
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == ad)
			cout << i;
}