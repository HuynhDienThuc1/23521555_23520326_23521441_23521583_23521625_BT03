#include <iostream>
using namespace std;

void nhap(int[], int&);
void sapxep(int[], int);
int kthoanvi(int[], int, int[], int);
void xuat(int[], int, int[], int);

int main()
{
	int n, k;
	int a[500], b[500];
	cout << "nhap vao so phan tu cua mang a: ";
	nhap(a, n);
	cout << "nhap vao so phan tu cua mang b: ";
	nhap(b, k);
	xuat(a, n, b, k);
	return 0;
}

void nhap(int a[], int& n)
{
	cin >> n;
	cout << "Nhap vao cac phan tu cua mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void sapxep(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
				swap(a[i], a[j]);
}

int kthoanvi(int a[], int n, int b[], int k)
{
	if (k != n)
		return 0;
	sapxep(a, n);
	sapxep(b, k);
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a[i] != b[i])
			flag = 0;
	return flag;
}

void xuat(int a[], int n, int b[], int k)
{
	int lc = kthoanvi(a, n, b, k);
	if (lc == 1)
		cout << "mang a la hoan vi cua mang b";
	else
		cout << "mang a khong phai la hoan vi cua mang b";
}
