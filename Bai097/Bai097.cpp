#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
bool ktHoanThien(int);
int ViTriCuoi(int[], int);
int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	ViTriCuoi(a, n);
	cout << "Ket qua: " << ViTriCuoi(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
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