#pragma comment( linker, "/subsystem:windows /entry:mainCRTStartup" )
#include<SZN_FUC.H>
#include <windows.h>
#include <direct.h>
using namespace std;
const int sleep_time = 60000;
const int length = 512;
bool time(string s);
int main() {//ÆõºÏ¶È:¿çÇø
	using namespace std;
	char path_[length];
	char* path = getcwd(path_, length);
	string path_1 = path;
	string path_2 = path_1;
	path_1 += "\\img.jpg";
	path_2 += "\\config.txt";
	step:
	while (time(path_2)) {
		SystemParametersInfoA(SPI_SETDESKWALLPAPER, 0, (PVOID)path_1.c_str(), SPIF_SENDCHANGE);
		Sleep(sleep_time);
	}
	Sleep(3600000);
	goto step;
	return 0;
}
bool time(string s) {
	using namespace std;
	KUR::kurzer kur;
	auto time = kur.GetSystemTime();
	int year = time.year;
	int month = time.month;
	int day = time.day;
	std::ifstream ifs;
	ifs.open(s.c_str(), ios::in);
	if (!ifs.is_open()) {
		exit(EXIT_FAILURE);
	};
	int year_, month_, day_, year_1, month_1, day_1;
	ifs >> year_;
	ifs >> month_;
	ifs >> day_;
	ifs >> year_1;
	ifs >> month_1;
	ifs >> day_1;
	kur.Swap(year_, year_1);
	kur.Swap(month_, month_1);
	kur.Swap(day_, day_1);
	int y1 = year - year_1 + 1900;
	int m1 = month - month_1 + 1;
	int d1 = day - day_1;
	int y = year_ - year - 1900;
	int m = month_ - month - 1;
	int d = day_ - day;
	ifs.close();
	bool b1 = ((y1 > 0) || ((y1 == 0) && (m1 > 0)) || ((y1 == 0) && (m1 == 0) && (d1 > 0)));
	bool b2 = ((y > 0) || ((y == 0) && (m > 0)) || ((y == 0) && (m == 0) && (d > 0)));
	return b1 && b2;
};

