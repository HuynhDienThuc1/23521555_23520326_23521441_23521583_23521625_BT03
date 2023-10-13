#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
float TimX(float[], int);
void Xuat(float[], int);
float AmLonNhat(float[], int);

int main()
{
	float A[30];
	int n;
	Nhap(A, n);
	cout << "Gia tri am lon nhat la: " << TimX(A, n);
	float b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	cout << "\nGia tri am lon nhat la: " << AmLonNhat(b, k);
	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= (n - 1); i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << fixed << setw(10) << setprecision(3) << a[i];
}

float AmDau(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] < 0)
			return a[i];
	return 0;
}

float TimX(float a[], int n)
{
	float lc = AmDau(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i <= n - 1; i++)
		if (lc < a[i] && a[i] < 0)
			lc = a[i];
	return lc;
}