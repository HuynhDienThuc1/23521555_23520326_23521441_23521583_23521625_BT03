#include <iostream>
#include <iomanip>
void nhap(int[], int&);
bool ktNguyenTo(int);
int ktTonTai(int[], int);
using namespace std;

int main()
{
	int n;
	int a[100];
	nhap(a, n);
	cout << ktTonTai(a, n);
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

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

int ktTonTai(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]))
			flag = 1;
	return flag;
}