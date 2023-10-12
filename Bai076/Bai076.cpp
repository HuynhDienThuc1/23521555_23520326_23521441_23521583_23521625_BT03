#include <iostream>
#include <iomanip>
void nhap(float[], int&, float&);
float kt(int, float);
void gannhat(float[], int, float);
using namespace std;

int main()
{
	float a[100];
	float x;
	int n;
	nhap(a, n, x);
	gannhat(a, n, x);
	return 0;
}

void nhap(float a[], int& n, float& x)
{
	cout << "nhap gia tri cua x:";
	cin >> x;
	cout << "nhap so luong so trong mang:";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]:";
		cin >> a[i];
	}
}

float kt(float y, float x)
{
	return abs(x - y);
}

void gannhat(float a[], int n, float x)
{
	float lc = kt(a[0], x);
	for (int i = 1; i <= n - 1; i++)
	{
		if (kt(a[i], x) < lc)
			lc = kt(a[i], x);
	}
	cout << "vi tri so gan thuc gan x nhat la:";
	for (int i = 0; i <= n - 1; i++)
		if (kt(a[i], x) == lc)
			cout << setw(8) << i;
}