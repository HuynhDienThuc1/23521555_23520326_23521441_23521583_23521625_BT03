#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int TanSuat(int[], int, int);
void LietKe(int[], int[], int, int);

int main()
{
	int a[100];
	int b[100];
	int n;
	int m;
	cout << "Nhap mang A: " << endl;
	Nhap(a, n);
	cout << "Nhap mang B: " << endl;
	Nhap(b, m);
	LietKe(a, b, n, m);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	//srand(time(NULL));
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}
int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			dem++;
	}
	return dem;
}
void LietKe(int a[], int b[], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
			if (a[i] == a[j])
				flag = 0;
		if (TanSuat(b, m, a[i]) == 0 && flag)
			cout << setw(4) << a[i];
	}
	for (int i = 0; i < m; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
			if (a[i] == a[j])
				flag = 0;
		if (TanSuat(a, n, b[i]) == 0 && flag)
			cout << setw(4) << b[i];
	}
}