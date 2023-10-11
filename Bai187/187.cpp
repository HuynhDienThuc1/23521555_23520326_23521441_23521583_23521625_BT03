#include <iostream>
using namespace std;

void nhap(float[], int&);
float tongcon(float[], int, int, int);
int ktmangcon(float[], int, int, int);
int vitriduongdau(float[], int);
void tongduongmax(float[], int, int&, int&);

int main()
{
	int n, vtd, vtc;
	float a[500];
	nhap(a, n);
	tongduongmax(a, n, vtd, vtc);
	cout << "mang con co tong duong lon nhat la: ";
	for (int i = vtd; i <= vtc; i++)
		cout << a[i] << " ";
	return 0;
}

void nhap(float a[], int& n)
{
	cout << "Nhap vao so luong phan tu cua mang: ";
	cin >> n;
	cout << "Nhap cac phan tu cua mang: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

float tongcon(float a[], int n, int vt, int l)
{
	int s = 0;
	for (int i = 0; i < l; i++)
		s += a[vt + i];
	return s;
}

int ktmangcon(float a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i < l; i++)
		if (a[vt + i] <= 0)
			flag = 0;
	return flag;
}

int vitriduongdau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			return i;
	return -1;
}

void tongduongmax(float a[], int n, int& vtd, int& vtc)
{
	int vt = vitriduongdau(a, n);
	if (vt == -1)
	{
		vtd = vtc = -1;
		return;
	}
	int smax = a[vt];
	vtd = vtc = vt;
	for (int l = 1; l <= n; l++)
	{
		for (int vt = 0; vt <= n - 1; vt++)
		{
			if (ktmangcon(a, n, vt, l) == 1 && tongcon(a, n, vt, l) > smax)
			{
				vtd = vt;
				vtc = vt + l - 1;
				smax = tongcon(a, n, vt, l);
			}
		}
	}
}