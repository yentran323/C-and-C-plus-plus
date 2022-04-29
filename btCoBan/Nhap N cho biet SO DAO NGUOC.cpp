#include <iostream>

using namespace std;

int main()
{
	int n, sodaonguoc;
	do {
		cout << "Nhap n = ";
		cin >> n;
		if (n < 0)
		{
			cout << "Nhap lai" << endl;
		}
	} while (n < 0);
	sodaonguoc = 0;
	while (n != 0)
	{
		sodaonguoc = sodaonguoc * 10 + n % 10;
		n /= 10;
	}
	cout << "So dao nguoc la:" << sodaonguoc << endl;
	return 0;
}