#pragma comment( linker, "/subsystem:windows /entry:mainCRTStartup" )
#define ENABLE_VOLUME
#define Windows_ENABLE_KURZER
#define USE_ASCII
#include<SZN_FUC.H>
#define ST_(x,y) (*ST[x])[y]
using namespace std;
using namespace KUR;
int tominute();
int main() {//24,1440
	KUR::Kwin::SetAutoRun("volume");
	string* data = KUR::FastRead_N("config.txt");
	vector<string> S = split(*data, "\n");
	Stack<Stack<string>*> ST;
	for (auto i : S) {
		Kstring I = i.c_str();
		ST << Stack<>::SubLineAsString(I, "[", "]");
	};

step:
	{
		Sleep(1000);
		int wday = KUR::TIME().tm_wday;
		if (wday == 0) { wday = ST.length() - 1; }
		else { wday--; };
		for (int i = 0; i < (*ST[wday]).length(); i++) {
			if (!(ST_(wday, i) == "")) {
				auto w = split(ST_(wday, i), ",");
				int a = atoi(w[0].c_str());
				int b = atoi(w[1].c_str());
				int c = tominute();
				if (a <= c && c <= b) {
					setvol(0);
				};
			};
		};
	};
	goto step;
	system("pause");
	return 0;
};
int tominute() {
	KUR::SZN szn;
	auto w = szn.GetSystemTime();
	return w.hour * 60 + w.minute;
};