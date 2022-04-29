#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b;
	char pheptinh;
	cout << "Nhap so thuc thu nhat:";
	cin >> a;
phepchia:
	{
		cout << "Nhap so thuc thu hai:";
		cin >> b;
	}
	cout << "Moi chon phep tinh (+,-,*,/) can thuc hien:";
	cin >> pheptinh;
	cout << "Ky tu vua nhap:" << pheptinh << endl;
	if (pheptinh == 43)
		cout << "Tong cua 2 so tren la: " << a + b;
	if (pheptinh == 45)
		cout << "Hieu cua 2 so tren la: " <<  a - b;
	if (pheptinh == 42)
		cout << "Tich cua 2 so tren la: " << a * b;
	if (pheptinh == 47)
	{
		if (b == 0)
		{
			cout << "Khong the chia cho so 0. Nhap lai b" << endl;
			goto phepchia;
		}
		else
			cout << "Thuong cua 2 so tren la: " << a / b << endl;
	}
	return 0;
}
