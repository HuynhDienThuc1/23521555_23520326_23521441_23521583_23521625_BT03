#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDang5m(int);
int DauTien(int[], int);
int TimGiaTri(int[], int);

int main()
{
	int b[100];
	int k;
	Nhap(b, k);

	cout << "\nMang ban dau: ";
	Xuat(b, k);

	cout << "\nGia tri thoa dieu kien: " << TimGiaTri(b, k);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}

bool ktDang5m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	int t = abs(n);
	while (t > 1)
	{
		int du = t % 5;
		if (du != 0)
			flag = false;
		t = t / 5;
	}
	return flag;
}
int DauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktDang5m(a[i]) != 0)
			return a[i];
	return 0;
}

int TimGiaTri(int a[], int n)
{
	int lc = DauTien(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (ktDang5m(a[i]) == 1 && a[i] > lc)
			lc = a[i];
	return lc;
}
