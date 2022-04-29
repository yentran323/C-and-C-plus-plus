#include <iostream>

using namespace std;

int main()
{
	int n, tg, sodaonguoc;
	do {
		cout << "Nhap n =";
		cin >> n;
		if (n < 0)
		{
			cout << "Nhap lai" << endl;
		}
	} while (n < 0);
	sodaonguoc = 0;
	for (tg = n; tg != 0; tg /= 10)
	{
		sodaonguoc = sodaonguoc * 10 + tg % 10;
	}
	if (n == sodaonguoc)
		cout << "So tren la so doi xung" << endl;
	else
		cout << "So tren khong la so doi xung" << endl;
	return 0;
}