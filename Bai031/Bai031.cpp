#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: \n";
	Xuat(b, k);

	LietKe(b, k);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= (n - 1); i++)
		a[i] = -100 + rand() / ((float)RAND_MAX / 200);
}

void LietKe(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			if (i != j && a[i] <= a[j])
				cout << setw(10) << "(" << a[i] << ", " << a[j] << ")";
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << fixed << setw(10) << setprecision(3) << a[i];
}