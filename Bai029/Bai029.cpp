#include <iostream>
#include <cmath>

using namespace std;

void Nhap(int[], int&);
int Lonnhat(int[], int);
void LietKe(int[], int);

int main()
{
	int n;
	int a[500];
	Nhap(a, n);
	cout << "Vi tri chua gia tri chan lon nhat: ";
	LietKe(a, n);
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "] = ";
		cin >> a[i];
	}
}
int Lonnhat(int a[], int n)
{
	int ln = a[0];
	for (int i = 0; i < n; i++)
		if ( a[i]%2==0)
			if (a[i] > ln)
				ln = a[i];
	return ln;
}
void LietKe(int a[], int n)
{
	float lk = Lonnhat(a, n);
	for (int i = 0; i < n; i++)
		if (a[i] == lk)
			cout << i << " ";

}
