#include <iostream>
using namespace std;
void Nhap(int[], int&);
bool ktHoanThien(int);
int HoanThienDau(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "So hoan thien dau tien la " << HoanThienDau(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:";
		cin >> a[i];
	}
}

bool ktHoanThien( int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s = s + i;
	if (s == n)
		return true;
	return false;
}

int HoanThienDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktHoanThien(a[i]))
			return a[i];
	return -1;
}