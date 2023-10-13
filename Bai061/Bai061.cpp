#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int DemGiaTri(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);

	cout << "\nXuat mang mot chieu: ";
	Xuat(a, n);

	cout << "\nTong so cap gia tri trai dau: ";
	cout << DemGiaTri(a, n);
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
int DemGiaTri(float[], int)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	for (int i = 1; i <= n - 1; i++)
		if ((a[i] * a[i - 1] > 0) && abs(a[i]) > abs(a[i - 1]))
			dem++;
	return dem;
}