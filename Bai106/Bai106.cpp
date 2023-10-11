#include <iostream>
#include <cmath>

using namespace std;

void Nhap(int[], int&);
bool Vitrile(int);
int Sapxep(int[], int);

int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	if (Sapxep(a, n) == 0)
		cout << "Mang khong ton tai dang 5m";
	else
		cout << "Gia tri lon nhat co dang 5m: " << Sapxep(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "] = ";
		cin >> a[i];
	}
}

bool Vitrile(int k)
{
	int t = 1;
	while (t <= k)
	{
		if (t == k)
			return true;
		t = t * 5;
	}
}
int Sapxep(int a[], int n)
{
	int ln = 0;
	for (int i = 0; i < n; i++)
		if (Vitrile(a[i]) == true)
			if (ln<a[i])
				ln = a[i];
	return ln;

}
