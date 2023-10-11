#include <iostream>
#include <iomanip>
void nhap(int[], int&);
int ucln(int, int);
int bcnn(int, int);
int TimBCNN(int[], int);
using namespace std;

int main()
{
	int n;
	int a[100];
	nhap(a, n);
	cout << "Boi chung nho nhat cua mang la:" << TimBCNN(a, n);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "nhap so luong chu so cua mang:";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]:";
		cin >> a[i];
	}
}

int ucln(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a*b!=0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return (a+b);
}

int bcnn(int a, int b)
{
	return abs(a * b) / ucln(a, b);
}

int TimBCNN(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		lc = bcnn(lc, a[i]);
	return lc;
}