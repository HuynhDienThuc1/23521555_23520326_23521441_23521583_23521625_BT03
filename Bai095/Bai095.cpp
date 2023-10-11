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
	cout <<"So hoan thien cuoi cung: "<< Sapxep(a, n);
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
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s =s+i;
	if (s == k)
		return true;
	return false;
}
int Sapxep(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (Vitrile(a[i]) == true)
			return a[i];
	return -1;
}
