#include <iostream>
#include <cmath>
using namespace std;

int DemSoChuSo(long long int so)
{
	int dem = so == 0 ? 1 : 0;
	while (so != 0)
	{
		so /= 10;
		dem++;
	}
	return dem;
}
void DocSoCo1ChuSo(int so)
{
	switch (so)
	{
	case 0: { cout << "Khong "; break; }
	case 1: { cout << "Mot "; break; }
	case 2: { cout << "Hai "; break;	}
	case 3: { cout << "Ba "; break; 	}
	case 4: { cout << "Bon "; break; }
	case 5: { cout << "Nam "; break; }
	case 6: { cout << "Sau "; break; }
	case 7: { cout << "Bay "; break; }
	case 8: { cout << "Tam "; break; }
	case 9: { cout << "Chin "; break; }
	}
}
void DocSoCo2ChuSo(int so) //doc so co 2 cs
{
	switch (so)
	{
	case 10: { cout << "Muoi "; break; }
	case 11: { cout << "Muoi Mot "; break; }
	case 12: { cout << "Muoi Hai "; break; }
	case 13: { cout << "Muoi Ba "; break; }
	case 14: { cout << "Muoi Bon "; break; }
	case 15: { cout << "Muoi Lam "; break; }
	case 16: { cout << "Muoi Sau "; break; }
	case 17: { cout << "Muoi Bay "; break; }
	case 18: { cout << "Muoi Tam "; break; }
	case 19: { cout << "Muoi Chin "; break; }
	case 20: { cout << "Hai Muoi "; break; }
	case 30: { cout << "Ba Muoi "; break; }
	case 40: { cout << "Bon Muoi "; break; }
	case 50: { cout << "Nam Muoi "; break; }
	case 60: { cout << "Sau Muoi "; break; }
	case 70: { cout << "Bay Muoi "; break; }
	case 80: { cout << "Tam Muoi "; break; }
	case 90: { cout << "Chin Muoi "; break; }
	default:
	{
		DocSoCo1ChuSo(so / 10); //doc so hang chuc
		cout << "Muoi ";
		if (so % 10 == 5)
			cout << "Lam ";
		else
			DocSoCo1ChuSo(so % 10); // doc so hang don vi
	}
	}
}
void DocSoCo3ChuSo(int so) //truyen vao so co 3 cs
{
	switch (so)
	{
	case 100: { cout << "Mot Tram "; break; }
	case 200: { cout << "Hai Tram "; break; }
	case 300: { cout << "Ba Tram "; break; }
	case 400: { cout << "Bon Tram "; break; }
	case 500: { cout << "Nam Tram "; break; }
	case 600: { cout << "Sau Tram "; break; }
	case 700: { cout << "Bay Tram "; break; }
	case 800: { cout << "Tam Tram "; break; }
	case 900: { cout << "Chin Tram "; break; }
	default:
	{
		if (so % 100 < 10)
		{
			DocSoCo1ChuSo(so / 100); //doc so hang tram 
			cout << "Tram Le ";
			DocSoCo1ChuSo(so % 100); // doc so hang don vi
		}
		else
		{
			DocSoCo1ChuSo(so / 100); //doc so hang tram
			cout << "Tram ";
			DocSoCo2ChuSo(so % 100); //doc so hang chuc va hang don vi
		}
	}
	}
}

//Doc lop cua so <Lop Ty, Trieu, Nghin, ...>
void DocLopCuaSo(int SoDauPhay)
{
	//-12,345,678,932 => sodauphay = 3, doc xong 12 so dau phay =2
	if (SoDauPhay % 3 == 0)
	{
		if (SoDauPhay >= 3)
			cout << "Ty ";
	}
	else if (SoDauPhay % 3 == 2)
		cout << "Trieu ";
	else if (SoDauPhay % 3 == 1)
		cout << "Nghin ";
}

int main()
{
	cout << "\t CHUONG TRINH DOC SO THANH CHU" << endl;

	//cout << "\nNhap vao mot so bat ky:";
	long long int n = 9223372036854775807;
	//cin >> n;
	cout << "\nSo vua nhap la: " << n << endl;
	long long int temp_n = n;
	if (temp_n < 0)
		temp_n *= -1; //nhan đe thanh so duong

	//int SoChuSo = temp_n == 0 ? 1 : (long long int)log10((double)temp_n) + 1; //Vi ep kieu nen co sai so
	int SoChuSo = DemSoChuSo(temp_n);
	cout << "\nSo chu so cua " << n << " la:" << SoChuSo << endl;
	int SoDauPhay = (SoChuSo - 1) / 3;
	//cout << "\nSo dau phay cua " << n << " la:" << SoDauPhay << endl;
	if (n < 0)
		cout << "Am ";
	//doc cum so dau tien - co the doc ca so 0
	long long int LuyThua = pow(10, 3 * SoDauPhay); //10^...
		//cout << temp_n / LuyThua <<endl;
	int CumSo = temp_n / LuyThua;

	if (CumSo < 10)
		DocSoCo1ChuSo(CumSo);
	else if (CumSo < 100)
		DocSoCo2ChuSo(CumSo);
	else DocSoCo3ChuSo(CumSo);
	DocLopCuaSo(SoDauPhay);

	SoDauPhay--;
	temp_n %= LuyThua;

	while (temp_n != 0)
	{
		LuyThua = pow(10, 3 * SoDauPhay);
		CumSo = temp_n / LuyThua;
		if (CumSo != 0)
		{
			DocSoCo3ChuSo(CumSo); //chi doc khi cum so khac 000
			DocLopCuaSo(SoDauPhay);
		}
		SoDauPhay--;
		temp_n %= LuyThua;
	}
	system("pause");
	return 0;
}

