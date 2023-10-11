#include <iostream>
#include <cmath>

using namespace std;

void Nhap(float[], int&);
int ktBang(float[], int);

int main()
{
	int n;
	float a[500];
	Nhap(a, n);
	if (ktBang(a, n) == 0)
		cout << "Mang khong bang";
	else
		cout << "Mang bang";
	return 0;
}
void Nhap(float a[], int& n)
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

int ktBang(float a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a[i] != a[0])
			flag = 0;
	return flag;
}