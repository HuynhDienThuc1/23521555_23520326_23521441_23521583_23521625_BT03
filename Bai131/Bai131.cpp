#include <iostream>
#include <iomanip>
void nhap(int[], int&);
int DemGiaTri(int[], int);
using namespace std;

int main()
{
	int n;
	int a[100];
	nhap(a, n);
	cout << "so luong gia tri lon hon tat ca gia tri truoc no la:" << DemGiaTri(a, n);
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

int DemGiaTri(int a[], int n)
{
	int dem = 0;
	for (int i = 1; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
			if (a[j] >= a[i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}