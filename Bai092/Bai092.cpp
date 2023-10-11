#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int TimGiaTri(int[], int);
int ChuSoDau(int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	if (TimGiaTri(a, n) != 0)
		cout << "Gia tri dau tien co chu so dau tien la so le la: " << fixed << setprecision(3) << TimGiaTri(a, n);
	else
		cout << "Khong ton tai gia tri co chu so dau tien la so le.";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	//srand(time(NULL));
	cout << "Nhap mang: \n";
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}
int ChuSoDau(int x)
{
	while (x >= 10)
		x /= 10;
	return x;
}
int TimGiaTri(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ChuSoDau(a[i]) % 2 == 1)
			return a[i];
	return 0;
}