#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void Nhap(int[], int&);
int KiemTraSong(int[], int);
int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	if (KiemTraSong(a, n))
		cout << "Co dang song";
	else
		cout << "Khong co dang song";
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	cout << "Nhap cac phan tu trong mang:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "] =";
		cin >> a[i];
	}
}
int KiemTraSong(int a[], int n)
{
	if (n <= 1)
		return 0;
	if (n == 2)
		if (a[0] == a[1])
			return 0;
		else
			return 1;
	int flag = 1;
	for (int i = 1; i <= n - 2; i++)
		if ((a[i] - a[i - 1]) * (a[i] - a[i + 1]) <= 0)
			flag = 0;
	return flag;
}