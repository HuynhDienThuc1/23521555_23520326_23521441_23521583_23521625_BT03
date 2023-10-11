#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
float DauTien(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	if (DauTien(a, n) != 0)
		cout << "Gia tri dau tien lon hon 2003 la: " <<fixed<< setprecision(3)<< DauTien(a, n);
	else
		cout << "Mang khong co gia tri lon hon 2003.";
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang: \n";
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}
float DauTien(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 2003)
			return a[i];
	return 0;
}