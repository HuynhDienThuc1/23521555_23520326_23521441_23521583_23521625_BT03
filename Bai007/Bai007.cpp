#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int& );
void Lietke(float[], int);

int main()
{
	float b[100];
	int k;
	Nhap(b, k);

	Lietke(b, k);
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
void Lietke(float a[], int n)
{
	cout << "Cac so duong: ";
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			cout << fixed << setw(10) << setprecision(3) << a[i];
}