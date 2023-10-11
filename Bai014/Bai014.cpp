#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
bool KtChinhPhuong(int);
void LietKe(int[], int n);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	cout << "Nhap mang: \n";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
bool KtChinhPhuong(int n)
{
	for (int i = 0; i < n; i++)
		if (i * i == n)
			return true;	
	return false;
}
void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (KtChinhPhuong(a[i]))
			cout << i << endl;
	
}