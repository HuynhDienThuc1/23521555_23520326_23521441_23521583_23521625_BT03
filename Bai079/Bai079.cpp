#include <iostream>
using namespace std;
float DuongDauTien(float[], int);

int main()
{
	float a[100];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:";
		cin >> a[i];
	}
	cout << "Gia tri duong dau tien la" << DuongDauTien(a, n);
	return 0;
}

float DuongDauTien(float a[], int n)
{
	for (int i = 0; i <= n; i++)
		if (a[i] > 0)
			return a[i];
	return -1;
}