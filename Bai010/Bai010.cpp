#include <iostream>
#include <iomanip>
void nhap(int[], int&);
bool ktToanLe(int);
void LietKe(int[], int);
using namespace std;
int main()
{
	int n;
	int a[500];
	nhap(a, n);
	LietKe(a, n);
	return 0;
}

void nhap(int a[], int& n)
{
	cout << "nhap n:";
	cin >> n;
	for (int i = 0; i < n ; i++)
	{
		cout << "Nhap a[" << i << "]:";
		cin >> a[i];
	}
}

bool ktToanLe(int n)
{
	if (n == 0)
		return false;
	bool flag = true;
	int t = abs(n);
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = false;
		t = t / 10;
	}
	return flag;
}

void LietKe(int a[], int n)
{
	cout << "cac so toan le la:";
	for (int i = 0; i < n; i++)
		if (ktToanLe(a[i]))
			cout << setw(8) << a[i];
}