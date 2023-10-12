#include <iostream>
#include <iomanip>
void nhap(int[], int&);
bool ktDoiXung(int);
int DemDoiXung(int[], int);
using namespace std;

int main()
{
	int a[100];
	int n;
	nhap(a, n);
	cout << "so luong so doi xung trong mang la:" << DemDoiXung(a, n);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "nhap so luong chu so trong mang:";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "]:";
		cin >> a[i];
	}
}

bool ktDoiXung(int n)
{
	int t = n;
	int dv;
	int dn = 0;
	while (t != 0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == n)
		return true;
	else
		return false;
}

int DemDoiXung(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (ktDoiXung(a[i]))
			dem++;
	return dem;
}