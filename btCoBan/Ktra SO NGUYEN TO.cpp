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
	if (n < 2)
	{
		cout << n << " khong la so nguyen to" << endl;
	}
	else
	{
		if (n == 2)
		{
			cout << n << " la so nguyen to" << endl;
		}
		else
		{
			if (n % 2 == 0)
			{
				cout << n << " khong la so nguyen to" << endl;
			}
			else
			{
				for (i = 2; i < n; i = i + 2)
				{
					if (n % i == 0)
					{
						kt = 0;
						break;
					}
					else kt = 1;
				}
				if (kt == 0)
				{
					cout << n << " khong la so nguyen to" << endl;
				}
				else
				{
					cout << n << " la so nguyen to" << endl;
				}
			}
		}
	}
	return 0;
}