#include <iostream>
#include <iomanip>
void nhap(float[], int&);
void lietke(float[], int);
using namespace std;
int main()
{
	float a[500];
	int n;
	nhap(a, n);
	lietke(a, n);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "nhap so luong phan tu cua mang:";
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cout << "nhap a[" << i << "]:";
		cin >> a[i];
	}
}

void lietke(float a[],int n)
{
	cout << "cac so lon hon gia tri tuyet doi so lien ke la:";
	for (int i = 0; i <= n - 2; i++)
		if (a[i] > abs(a[i + 1]))
			cout << setw(8) << a[i];
}
