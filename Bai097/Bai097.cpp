#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktHoanThien(int);
int ViTriCuoi(int[], int);

int main()
{
	int k;
	int b[100];

	cout << "\nMang ban dau: ";
	Nhap(b, k);
	ViTriCuoi(b, k);
	Xuat(b, k);

	cout << "\nKet qua: " << ViTriCuoi(b, k);
	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = rand() % (200 + 1) - 100;
}

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1;i < k;i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}

int ViTriCuoi(int a[], int n)
{
	for (int i = n - 1;i >= 0;i--)
		if (ktHoanThien(a[i]))
			return i;
	return -1;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}