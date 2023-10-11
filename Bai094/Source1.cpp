#include <iostream>
#include <cmath>

using namespace std;

void Nhap(int[], int&);
bool ktNguyenTo(int);
int NguyenTocuoi(int[], int);

int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	cout << NguyenTocuoi(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
int NguyenTocuoi(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktNguyenTo(a[i]) == true)
			return a[i];
	return 0;
}