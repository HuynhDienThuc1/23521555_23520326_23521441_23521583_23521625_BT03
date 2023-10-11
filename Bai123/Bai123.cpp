#include <iostream>
using namespace std;
void Nhap(int[], int&);
int ktDoiXung(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	if (ktDoiXung(a, n) == 1)
		cout << "Cac so nguyen trong mang doi xung nhau";
	else
		cout << "Cac so nguyen trong mang khong doi xung nhau";
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

int ktDoiXung(int a[], int n)
{
	int flag = 1;
	int i = 0;
	int k = n - 1;
	while (i < k)
	{
		if (a[i] != a[k])
			flag = 0;
		i++;
		k--;
	}
	return flag;
}