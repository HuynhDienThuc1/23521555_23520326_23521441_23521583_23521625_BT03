#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void GanNhat(int[], int, int&, int&);
void LietKe(int[], int);

int main()
{
	int a[500];
	int n;

	Nhap(a, n);

	cout << "\nXuat mang mot chieu: ";
	Xuat(a, n);
	cout << "\nCac cap gia tri gan nhau nhat trong mang la: ";
	LietKe(a, n);
	cout << "\n\n\n Ket thuc!!!";

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}
void GanNhat(int a[], int n, int& x, int& y)
{
	x = a[0];
	y = a[1];
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (abs(a[i] - a[j]) < abs(x - y))
			{
				x = a[i];
				y = a[j];
			}
}
void LietKe(int a[], int n)
{
	int x, y;
	GanNhat(a, n, x, y);
	for (int i = 0; i <= n - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			if (i != j && abs(a[i] - a[j]) == abs(x - y))
				cout << "(" << a[i] << ", " << a[j] << ")";
}