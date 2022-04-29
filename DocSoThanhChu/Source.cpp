/*Chương trình đọc số thành chữ. Với mỗi số nhập vào sẽ hiển thị như lúc nhập số tiền trong app Ngân hàng
Giá trị đọc được không quá phạm vi kiểu dữ liệu long long int với LLONG_MIN = -2^63 và LLONG_MAX = 2^63 - 1 = 9,223,372,036,854,775,807
*/ 
//'0' có mã ASCII là 48,... => chuyển từ kí tự sang số: lấy mã ASCII trừ đi 48; c = '0' ~ c = 48

#include <iostream>
#include <conio.h>
#include <io.h> //thư viện định nghĩa cho hàm _setmode
#include <fcntl.h> //thư viện định nghĩa cho hàm _setmode (_o_wtext)
#include <Windows.h>

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
	case 0: { wcout << L"Không "; break; }
	case 1: { wcout << L"Một "; break; }
	case 2: { wcout << L"Hai "; break;	}
	case 3: { wcout << L"Ba "; break; 	}
	case 4: { wcout << L"Bốn "; break; }
	case 5: { wcout << L"Năm "; break; }
	case 6: { wcout << L"Sáu "; break; }
	case 7: { wcout << L"Bảy "; break; }
	case 8: { wcout << L"Tám "; break; }
	case 9: { wcout << L"Chín "; break; }
	}
}
void DocSoCo2ChuSo(int so) //doc so co 2 cs
{
	switch (so)
	{
	case 10: { wcout << L"Mười "; break; }
	case 11: { wcout << L"Mười Một "; break; }
	case 12: { wcout << L"Mười Hai "; break; }
	case 13: { wcout << L"Mười Ba "; break; }
	case 14: { wcout << L"Mười Bốn "; break; }
	case 15: { wcout << L"Mười Lăm "; break; }
	case 16: { wcout << L"Mười Sáu "; break; }
	case 17: { wcout << L"Mười Bảy "; break; }
	case 18: { wcout << L"Mười Tám "; break; }
	case 19: { wcout << L"Mười Chín "; break; }
	case 20: { wcout << L"Hai Mươi "; break; }
	case 30: { wcout << L"Ba Mươi "; break; }
	case 40: { wcout << L"Bốn Mươi "; break; }
	case 50: { wcout << L"Năm Mươi "; break; }
	case 60: { wcout << L"Sáu Mươi "; break; }
	case 70: { wcout << L"Bảy Mươi "; break; }
	case 80: { wcout << L"Tám Mươi "; break; }
	case 90: { wcout << L"Chín Mươi "; break; }
	default:
	{
		DocSoCo1ChuSo(so / 10); //doc so hang chuc
		wcout << L"Mươi ";
		if (so % 10 == 1)
			wcout << L"Mốt ";
		else if (so % 10 == 5)
			wcout << L"Lăm ";
		else
			DocSoCo1ChuSo(so % 10); // doc so hang don vi
	}
	}
}
void DocSoCo3ChuSo(int so) //truyền vào số có 3 chữ số
{
	switch (so)
	{
	case 100: { wcout << L"Một Trăm "; break; }
	case 200: { wcout << L"Hai Trăm "; break; }
	case 300: { wcout << L"Ba Trăm "; break; }
	case 400: { wcout << L"Bốn Trăm "; break; }
	case 500: { wcout << L"Năm Trăm "; break; }
	case 600: { wcout << L"Sáu Trăm "; break; }
	case 700: { wcout << L"Bảy Trăm "; break; }
	case 800: { wcout << L"Tám Trăm "; break; }
	case 900: { wcout << L"Chín Trăm "; break; }
	default:
	{
		if (so % 100 < 10)
		{
			DocSoCo1ChuSo(so / 100); //đọc số hàng trăm 
			wcout << L"Trăm Lẻ ";
			DocSoCo1ChuSo(so % 100); // đọc số hàng đơn vị
		}
		else
		{
			DocSoCo1ChuSo(so / 100); //đọc số hàng trăm
			wcout << L"Trăm ";
			DocSoCo2ChuSo(so % 100); //đọc số hàng chục và hàng đơn vị
		}
	}
	}
}

//Đọc lớp của số <Lớp Tỷ, Triệu, Nghìn, ...>
void DocLopCuaSo(int SoDauPhay)
{
	if (SoDauPhay % 3 == 0)
	{
		if (SoDauPhay != 0)
			wcout << L"Tỷ ";
	}
	else if (SoDauPhay % 3 == 2)
		wcout << L"Triệu ";
	else if (SoDauPhay % 3 == 1)
		wcout << L"Nghìn ";
}
void DocSo(long long int n)
{
	//long long int temp_n = n; //Không cần temp_n nữa vì ra khỏi hàm thì n không bị thay đổi giá trị
	if (n < 0)
	{
		n *= -1;
		wcout << L"Âm ";
	}

	//int SoChuSo = n == 0 ? 1 : (long long int)log10((double)n) + 1; //Vì ép kiểu nên có sai số
	int SoChuSo = DemSoChuSo(n); //13
	//wcout << L"\nSố chữ số của " << n << L" là:" << SoChuSo << endl;
	int SoDauPhay = (SoChuSo - 1) / 3;
	//wcout << "\nSố dấu phẩy của " << n << " là:" << SoDauPhay << endl;
	
	//Đọc cụm số đầu tiên - có thể đọc cả số 0
	long long int LuyThua = pow(10, 3 * SoDauPhay); //10^... 10^12
		//wcout << n / LuyThua <<endl;
	int CumSo = n / LuyThua; //9

	if (CumSo < 10)
		DocSoCo1ChuSo(CumSo);
	else if (CumSo < 100)
		DocSoCo2ChuSo(CumSo);
	else DocSoCo3ChuSo(CumSo);
	DocLopCuaSo(SoDauPhay);

	SoDauPhay--;
	n %= LuyThua;

	while (SoDauPhay >= 0)
	{
		LuyThua = pow(10, 3 * SoDauPhay);
		CumSo = n / LuyThua;
		if (CumSo != 0) //chi doc khi cum so khac 000
		{
			DocSoCo3ChuSo(CumSo);
			DocLopCuaSo(SoDauPhay);
		}
		else
		{
			if (SoDauPhay >= 3 && SoDauPhay % 3 == 0)
				wcout << L"Tỷ ";
		}
		SoDauPhay--;
		n %= LuyThua;
	}
}
void ThemDauPhay(long long int n) //Thêm dấu phẩy ngăn cách giữa các cụm số
{
	if (n < 0)
	{
		n *= -1;
		wcout << "-";
	}

	int SoChuSo = DemSoChuSo(n);
	int SoDauPhay = (SoChuSo - 1) / 3;

	//Đọc cụm số đầu tiên - có thể đọc cả TH n = 0
	long long int LuyThua = pow(10, 3 * SoDauPhay); //10^... 10^12
	int CumSo = n / LuyThua;

	wcout << CumSo;

	if (SoDauPhay > 0)
		wcout << ",";

	SoDauPhay--;
	n %= LuyThua;

	while (SoDauPhay >= 0)
	{
		LuyThua = pow(10, 3 * SoDauPhay);
		CumSo = n / LuyThua;
		//wprintf(L"%03d", CumSo);  // %03d xuất ra đủ 3 số, nếu không đủ thì sẽ thêm số 0
		// câu lệnh if else dưới đây có thể thay thế cho hàm wprintf ...
		if (CumSo != 0) //chi doc khi cum so khac 000
		{
			if (CumSo < 10)
				wcout << "00" << CumSo;
			else if (CumSo < 100)
				wcout << "0" << CumSo;
			else wcout << CumSo;
		}
		else
			wcout << "000";
		
		if (SoDauPhay > 0)
			wcout << ",";
		SoDauPhay--;
		n %= LuyThua;
	}
}
int main()
{
	_setmode(_fileno(stdout), _O_U16TEXT); //kích hoạt chế độ bảng mã unicode (có dấu)
	//chuyển cout về wcout, wcin để tránh sai và thêm L vào trước dấu nháy kép ""
	char c;
	long long int number = 0;
	long long int Max = (long long int) pow(2.0, 8 * sizeof(number) - 1) - 1; //không ép kiểu thì khi nhấn số 0 thì xảy ra tràn dữ liệu
	wcout << L"Hãy nhập vào một số:" << endl;

	/*	xảy ra vấn đề tràn dữ liệu 
	khi number * 10 + x > LLONG_MAX 
	<=> number * 10  > LLONG_MAX - x 
	<=> number > (LLONG_MAX - x) / 10	*/

	while (true)
	{
		c = _getch();
		if (c >= '0' && c <= '9' || c == 8)
		{
			if (c >= '0' && c <= '9')
			{
				if (number > (Max - (c - 48)) / 10)
				{
					wcout << L"\nKhông thể đọc số lớn hơn:" << Max;
					Sleep(1000);
				}
					
				else
					number = number * 10 + (c - 48);
			}
			else if (c == 8)
			{
				number = number / 10;
			}
			//wcout << number << endl;
			system("cls");
			wcout << L"Hãy nhập vào một số:" << endl;

			ThemDauPhay(number); //thêm dấu phẩy để ngăn cách các cụm số
			wcout << endl;
			DocSo(number);
		}
	}

	system("pause");
	return 0;
}