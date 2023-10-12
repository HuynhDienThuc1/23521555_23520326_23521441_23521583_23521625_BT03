#include<iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void NguyenHoa(float[], int);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	NguyenHoa(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void NguyenHoa(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			a[i] = int(a[i] + 0.5);
		else
			a[i] = int(a[i] - 0.5);
	}
}