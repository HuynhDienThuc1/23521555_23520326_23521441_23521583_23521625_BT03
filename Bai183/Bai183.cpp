#include <iostream>
#include <cmath>

using namespace std;

void Nhap(int[], int&);
int ktCon(int[], int, int[], int);

int main()
{
	int n,m;
	int a[500],b[500];
	Nhap(a, n);
	Nhap(b, m);
	cout << ktCon(a,n,b,m);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int ktCon(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int flag = 0;
	for (int vt = 0; vt<=m-n;vt++)
	{
		int co = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				co = 0;
		if (co == 1)
			flag = 1;
	}
	return flag;
}
