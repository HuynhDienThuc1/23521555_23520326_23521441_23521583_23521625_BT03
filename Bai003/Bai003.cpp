#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

void nhap(string, int[], int&);
void xuat(int[], int);

int main()
{
	int a[500];
	int n;
	nhap("intdata01.inp", a, n);
	cout << "Mang ban dau ";
	xuat(a, n);
	return 0;
}

void nhap(string filename , int a[], int& n)
{
	ifstream fi(filename);
	fi >> n;
	for(int i=0; i<=n-1;i++)
		fi>>a[i];
}

void xuat(int a[], int n)
{
	cout<<n<<endl;
	for(int i=0;i<=n-1;i++)
		cout<<setw(10)<<a[i];
}