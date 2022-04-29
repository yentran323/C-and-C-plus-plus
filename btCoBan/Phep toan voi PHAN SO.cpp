#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long tu1, mau1, tu2, mau2, ucln, tg1, tg2; // tu3/mau3 la phan so ket qua
	long tutong, mautong, tuhieu, mauhieu, tutich, mautich, tuthuong, mauthuong;
	do {
		cout << "Nhap phan so thu nhat:";
		cin >> tu1 >> mau1;
		if (mau1 == 0)
			cout << "Mau khong the bang khong. Nhap lai phan so" << endl;
	} while (mau1 == 0);
	do {
		cout << "Nhap phan so thu hai:";
		cin >> tu2 >> mau2;
		if (mau2 == 0)
			cout << "Mau khong the bang khong. Nhap lai phan so" << endl;
	} while (mau2 == 0);
	//tong
	cout << "\nTong cua hai phan so la:";
	tutong = tu1 * mau2 + tu2 * mau1;
	mautong = mau1 * mau2;
	if (tutong == 0) cout << "0" << endl;
	else
	{
		tg1 = abs(tutong); tg2 = mautong;
		while (tg1 != tg2)
		{
			if (tg1 < tg2)
			{
				tg2 -= tg1;
			}
			else
			{
				tg1 -= tg2;
			}
		}
		ucln = tg1;
		if (abs(tutong) == abs(mautong))
		{
			if (tutong == mautong) cout << "1" << endl;
			else cout << "-1" << endl;
		}
		else
		{
			if (mautong < 0)
				cout << -tutong / ucln << "/" << abs(mautong / ucln);
			else cout <<  tutong / ucln << "/" << mautong / ucln;
		}
	}
	//hieu
	cout << "\nHieu cua hai phan so la:";
	tuhieu = tu1 * mau2 - tu2 * mau1;
	mauhieu = mau1 * mau2;
	if (tuhieu == 0) cout << "0" << endl;
	else
	{
		tg1 = abs(tuhieu); tg2 = mauhieu;
		while (tg1 != tg2)
		{
			if (tg1 < tg2)
			{
				tg2 -= tg1;
			}
			else
			{
				tg1 -= tg2;
			}
		}
		ucln = tg1;
		if (abs(tuhieu) == abs(mauhieu))
		{
			if (tuhieu == mauhieu) cout << "1" << endl;
			else cout << "-1" << endl;
		}
		else
		{
			if (mauhieu < 0)
				cout << -tuhieu / ucln << "/" << abs(mauhieu / ucln);
			else
				cout << tuhieu / ucln << "/" << mauhieu / ucln;
		}
	}
	//tich
	cout << "\nTich cua hai phan so la:";
	tutich = tu1 * tu2;
	mautich = mau1 * mau2;
	mauhieu = mau1 * mau2;
	if (tutich == 0) cout << "0" << endl;
	else
	{
		tg1 = abs(tutich); tg2 = mautich;
		while (tg1 != tg2)
		{
			if (tg1 < tg2)
			{
				tg2 -= tg1;
			}
			else
			{
				tg1 -= tg2;
			}
		}
		ucln = tg1;
		if (abs(tutich) == abs(mautich))
		{
			if (tutich == mautich) cout << "1" << endl;
			else cout << "-1" << endl;
		}
		else
		{
			if (mautich < 0)
				cout << -tutich / ucln << "/" << abs(mautich / ucln);
			else
				cout << tutich / ucln << "/" << mautich / ucln;
		}
	}
	//thuong
	cout << "\nThuong cua hai phan so la:";
	if (tu1 == 0 || tu2 == 0) cout << "0" << endl;
	else
	{
		tuthuong = tu1 * mau2;
		mauthuong = mau1 * tu2;
		tg1 = abs(tuthuong); tg2 = abs(mauthuong);
		while (tg1 != tg2)
		{
			if (tg1 < tg2)
			{
				tg2 -= tg1;
			}
			else
			{
				tg1 -= tg2;
			}
		}
		ucln = tg1;
		if (abs(tuthuong) == abs(mauthuong))
		{
			if (tuthuong == mauthuong) cout << "1" << endl;
			else cout << "-1" << endl;
		}
		else
		{
			if (mauthuong < 0)
				cout << -tuthuong / ucln << "/" << abs(mauthuong / ucln);
			else
				cout << tuthuong / ucln << "/" << mauthuong / ucln;
		}
	}

	return 0;
}
