#include <iostream>
#include <iomanip>
void nhap(float[], int&);
int DemPhanBiet(float[], int);
using namespace std;

int main()
{
	float a[100];
	int n;
	nhap(a, n);
	cout << "so luong chu so phan biet trong mang la : " << DemPhanBiet(a, n);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "nhap so luong chu so trong mang:";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]:";
		cin >> a[i];
	}
}

int DemPhanBiet(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		bool flag = true;
		for (int j = 0; j < i; j++)
			if (a[j] == a[i])
				flag = false;
		if (flag == true)
			dem++;
	}
	return dem;
}