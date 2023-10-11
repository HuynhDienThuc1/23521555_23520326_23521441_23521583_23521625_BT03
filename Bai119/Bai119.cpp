#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
int ktTonTai(int[], int);
int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	ktTonTai(a, n);
	cout << "Ket qua: " << ktTonTai(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int ktTonTai(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			flag = 1;
	return flag;
}