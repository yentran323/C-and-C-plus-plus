
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int chon, lap = 1;
	double a, b, c, p;
	const float PI = 3.14;
	do {
		cout << "\n MOI BAN CHON HINH CAN TINH DIEN TICH" << endl;
		cout << "1.Hinh vuong" << endl;
		cout << "2.Hinh chu nhat" << endl;
		cout << "3.Hinh tron" << endl;
		cout << "4.Tam giac" << endl;
		cout << "5.Hinh thang" << endl;
		cout << "6.Thoat" << endl;
		cin >> chon;
		switch (chon)
		{
		case 1:
		{
			do {
				cout << "Nhap do dai canh hinh vuong:";
				cin >> a;
				if (a <= 0)
					cout << "\nDo dai canh khong hop le. Nhap lai!" << endl;
			} while (a <= 0);
			cout << "\nDien tich hinh vuong la:" << a*a << endl;
			break;
		}
		case 2: {
			do {
				cout << "Nhap chieu dai hinh chu nhat:";
				cin >> a;
				if (a <= 0)
					cout << "\nChieu dai khong hop le. Nhap lai!" << endl;
			} while (a <= 0);
			do {
				cout << "Nhap chieu rong hinh chu nhat:";
				cin >> b;
				if (b <= 0)
					cout << "\nChieu rong khong hop le. Nhap lai!" << endl;
			} while (b <= 0);
			cout << "\nDien tich hinh chu nhat la:" << a * b << endl;
			break;
		}
		case 3: {
			do {
				cout << "Nhap ban kinh hinh tron:";
				cin >> a;
				if (a <= 0)
					cout << "\nBan kinh khong hop le. Nhap lai!" << endl;
			} while (a <= 0);
			cout << "\nDien tich hinh tron la: " << a * a * PI << endl;
			break;
		}
		case 4: {
			do {
				do {
					cout << "Nhap do dai canh thu nhat cua tam giac:";
					cin >> a;
					if (a <= 0)
						cout << "\nDo dai khong hop le. Nhap lai!" << endl;
				} while (a <= 0);
				do {
					cout << "Nhap do dai canh thu hai cua tam giac:";
					cin >> b;
					if (b <= 0)
						cout << "\nDo dai khong hop le. Nhap lai!" << endl;
				} while (b <= 0);
				do {
					cout << "Nhap do dai canh thu ba cua tam giac:";
					cin >> c;
					if (c <= 0)
						cout << "\nDo dai khong hop le. Nhap lai!" << endl;
				} while (c <= 0);
				if (a + b <= c || b + c <= a || c + a <= b)
					cout << "\nDay khong phai do dai ba canh cua tam giac. Nhap lai!" << endl;
			} while (a + b <= c || b + c <= a || c + a <= b);
			p = (a + b + c) / 2; //nua chu vi
			cout << "\nDien tich tam giac la: " << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
			break;
		}
		case 5: {
			do {
				cout << "Nhap do dai canh day tren cua hinh thang:";
				cin >> a;
				if (a <= 0)
					cout << "\nDo dai khong hop le. Nhap lai!" << endl;
			} while (a <= 0);
			do {
				cout << "Nhap do dai canh day duoi cua hinh thang:";
				cin >> b;
				if (b <= 0)
					cout << "\nDo dai khong hop le. Nhap lai!" << endl;
			} while (b <= 0);
			do {
				cout << "Nhap chieu cao tren cua hinh thang:";
				cin >> c;
				if (c <= 0)
					cout << "\nChieu cao khong hop le. Nhap lai!" << endl;
			} while (c <= 0);
			cout << "\nDien tich hinh thang la: " << 0.5 * (a + b) * c << endl;
			break;
		}
		case 6: {
			lap = 0;
			break;
		}
		}
	} while (lap == 1);
	return 0;
}
