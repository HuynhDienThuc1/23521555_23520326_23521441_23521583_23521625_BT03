#include <iostream>
using namespace std;
bool ktNguyenTo(int);
int DemNguyenTo(int[], int);
int TongNguyenTo(int[], int);
float TrungBinhCong(int[], int);


int main()
{
	int a[500];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap cac phan tu cua mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Trung binh cong cac so nguyen trong mang la: " << TrungBinhCong(a, n);
	return 0;
}

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
int DemNguyenTo(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]))
			dem++;
	return dem;
}
int TongNguyenTo(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]))
			s = s + a[i];
	return s;
}
float TrungBinhCong(int a[], int n)
{
	int s = TongNguyenTo(a, n);
	int dem = DemNguyenTo(a, n);
	if (dem == 0)
		return 0;
	return (float)s / dem;
}