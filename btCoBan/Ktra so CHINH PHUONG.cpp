#include <iostream>

using namespace std;

int main()
{
	int n;
	do {
		cout << "Nhap so kiem tra:";
		cin >> n;
		if (n < 0)
		{
			cout << "Nhap lai" << endl;
		}
	} while (n < 0);
	int i, kt;
	kt = 0;
	for (i = 0; i * i <= n; i++)
	{
		if (i * i == n)
		{
			kt = 1;
		}
		else kt = 0;
	}
	if (kt == 0)
	{
		cout << n << " khong la so chinh phuong" << endl;
	}
	else
	{
		cout << n << " la so chinh phuong" << endl;
	}
	return 0;
}