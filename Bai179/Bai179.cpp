#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void nhap(float[], int&);
void xuat(float[], int);
int ktrcon(float[], int, int, int);
void lietke(float[], int);

int main()
{
	float a[500];
	int n;
	nhap(a, n);
	cout << "Mang ban dau la: ";
	xuat(a, n);
	cout << "Ket qua la: \n";
	lietke(a, n);
	return 0;
}
void nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]=";
		cin >> a[i];
	}
}

void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

int ktrcon(float a[], int n, int vt, int l)
{
	int flag = 1;
	for(int i=0; i<l; i++)
		if(a[vt+i]<=0)
			flag=0;
		return flag;
}

void lietke(float a[], int n)
{
	for (int l = 2; l < n; l++)
	{
		for(int vt = 0; vt < n; vt++)
		{
			if (ktrcon(a, n, vt, l) == 1)
			{
				for (int i = 0; i < l; i++)
					cout << a[vt + i]<<" ";
				cout << endl;
			}
		}
	}
}

