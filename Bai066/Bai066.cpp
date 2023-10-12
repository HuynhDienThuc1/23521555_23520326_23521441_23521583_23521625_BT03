#include <iostream>
using namespace std;

void nhap(int[], int&);
bool kiemtra(int);
int diemphanbiet(int[], int);
void xuat(int[], int);


int main()
{
	int n;
	int a[500];
	nhap(a, n);
	xuat(a, n);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "nhap so luong phan tu trong mang: ";
	cin >> n;
	cout << "nhap cac phan tu trong mang:\n";
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

bool kiemtra(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	else
		return false;
}

int diemphanbiet(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		bool flag = true;
		for (int j = 0; j <= i - 1; j++)
			if (a[i] == a[j])
				flag = false;
		if (kiemtra(a[i]) && flag == true)
			dem++;
	}
	return dem;
}

void xuat(int a[], int n)
{
	cout << "cac so nguyen to phan biet trong mang la: " << diemphanbiet(a, n);
}