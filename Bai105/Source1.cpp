
#include <iostream>
#include <cmath>

using namespace std;

void Nhap(int[], int&);
bool ktToanLe(int);
int ToanLeDauTien(int[], int);
int TimGiaTri(int[], int);

int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	ToanLeDauTien(a, n);
	cout << TimGiaTri(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
bool ktToanLe(int n)
{
	int t = n;
	while (t != 0)
	{
		if (t % 2 == 0)
			return false;
		t /= 10;
	}
	return true;
}
int ToanLeDauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktToanLe(a[i]) != 0)
			return a[i];
	return 0;
}
int TimGiaTri(int a[], int n)
{
	int lc = ToanLeDauTien(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if ((ktToanLe(a[i]) == 1) && (a[i] > lc))
			lc = a[i];
	return lc;
}