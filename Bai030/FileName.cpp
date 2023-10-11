#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void Nhap(float[], int&);
float NhoNhat(float[], int);
void LietKe(float[], int);
int main()
{
	int n;
	float a[500];
	Nhap(a, n);
	cout << "Cac cap gia tri trong man la: "<<endl;
	LietKe(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	cout << "Nhap cac phan tu trong mang:" << endl;
	for (int i = 0;i < n;i++)
	{
		cout << "A[" << i << "] =";
		cin >> a[i];
	}
}
void LietKe(float a[], int n)
{
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			if (i != j)
			{
				cout << "(" << a[i] << ",";
				cout << a[j] << ")" << setw(4);
			}
}
