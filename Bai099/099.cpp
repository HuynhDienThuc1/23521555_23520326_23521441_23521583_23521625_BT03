#include <iostream>
using namespace std;

void nhap(float [], int& );
int vitrisoduong(float[], int);
int timvitri(float [], int );
void xuat(float[], int);


int main()
{
	int n;
	float a[500];
	nhap(a, n);
	xuat(a, n);
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "Nhap vao so phan tu cua mang: ";
	cin >> n;
	cout << "Nhap vao cac phan tu cua mang:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

int vitrisoduong(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			return i;
	return -1;
}

int timvitri(float a[], int n)
{
	int lc = vitrisoduong(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
		if (a[i] > 0 && a[i] < a[lc])
			lc = i;
	return lc;
}

void xuat(float a[], int n)
{
	cout << "Vi tri cua so duong nho nhat la: " << timvitri(a, n);
}