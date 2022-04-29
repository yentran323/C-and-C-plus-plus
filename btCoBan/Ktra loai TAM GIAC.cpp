#include <iostream>

using namespace std;

int main()
{
	float a, b, c;
	cout << "Nhap do dai 3 canh:";
	cin >> a >> b >> c;
	if ((a + b > c && b + c > a) && c + a > b)
	{
		if ((a * a == b * b + c * c || b * b == a * a + c * c) || c * c == a * a + b * b)
		{
			cout << "Day la tam giac vuong" << endl;
		}
		else
		{
			if (a == b && b == c)
			{
				cout << "Day la tam giac deu" << endl;
			}
			else
			{
				if ((a == b || b == c) || a == c)
				{
					cout << "Day la tam giac can" << endl;
				}
				else
				{
					if ((a * a > b * b + c * c || b * b > a * a + c * c) || c * c > a * a + b * b)
					{
						cout << "Day la tam giac tu" << endl;
					}
					else
					{
						cout << "Day la tam giac nhon" << endl;
					}
				}
			}
		}
	}
	else
	{
		cout << "Khong phai do dai 3 canh cua 1 tam giac" << endl;
	}
	return 0;
}