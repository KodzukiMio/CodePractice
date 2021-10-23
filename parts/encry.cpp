//使用C99标准
#include"SZN_FUC.H"
#include <codecvt>
using namespace std;
void A(); void B(); string C();
int main() {
	string c;
	cin.clear();
	system("cls");
step_1:
	cout << "\n选择模式:" << "\n[A]加密" << "\n[B]解密\n";
	KUR::kurzer kr;
	c = kr.getstr("选择:");
	if (c == "A") {
		system("cls"); A();
	}
	else if (c == "B") {
		system("cls"); B();
	}
	else {
		cin.clear();
		system("cls");
		cout << "请选择正确选项";
		goto step_1;
	}
	cout << "\n\n";
	system("pause");
	return 0;
}
string C() {
	KUR::kurzer kr;
	cout << endl << "请勿使用非法格式的文件!!!\n";
	string c = kr.getstr("输入目标文件位置:");
	return c;
};
void A() {//加密
	//--------------获取文件
	const int max = 1024;
step_2:
	string f = C();
	wfstream F(f.c_str(), ios::in);
	F.imbue(locale(locale::classic(), new codecvt_utf8<wchar_t>));
	F.seekg(0, F.end);
	int Length = F.tellg();
	F.seekg(0, F.beg);
	if (!F.is_open()) {
		std::cout << "\n无法打开文件!!!\n\n";
		system("cls");
		std::cout << "请输入正确地址!!!\n";
		goto step_2;
	}
	F.close();
	cout << "读取中...";
	wstring ws = KUR::WI(f);
	//------------获取密钥
	KUR::kurzer kr;
	char* ls = kr.getstr("\n输入此文件的密钥:");
	string key = ls;
	const char* p = key.c_str();
	const int p_len = key.length();
	cout << endl << "开始加密........";
	const unsigned int MAX_ui = 4294967295;
	unsigned int seed = 0, seed_max = 0;
	for (int i = 0; i < p_len && seed_max < MAX_ui; i++) {
		seed = seed_max;
		seed_max += int(*(p + i));
	}
	srand(seed);//设置种子
	//------------------------流控制
	std::locale chs("chs");
	std::wcout.imbue(chs);
	//--------------原文转码
	const wchar_t* ws_p = ws.c_str();
	int ws_len = ws.length() - 2;
	int* ws_seed = new int[ws_len];
	int* ws_int = new int[ws_len];
	int* ws_res = new int[ws_len];
	int* ws_res_len = new int[ws_len];
	string keylen, ws_result;
	for (int i = 0; i < ws_len; i++) {
		ws_int[i] = int(ws_p[i]);//转换
		ws_seed[i] = rand();//获取随机数
		ws_res[i] = ws_int[i] + ws_seed[i];
		ws_res_len[i] = to_string(ws_res[i]).length();//获取对应长度
		keylen += to_string(ws_res_len[i]);
		ws_result += to_string(ws_res[i]);
	}
	//----------包装
	string key_ = "K" + keylen;
	string finals = f + "encryption.txt";
	std::fstream F_(finals.c_str(), std::ios::out);
	F_.imbue((std::locale)"chs");
	F_ << ws_result << key_;
	F_.close();
	cout << endl << "成功!!!" << endl << "文件已保存为:" << endl << finals;
	delete[] ws_seed;
	delete[] ws_int;
	delete[] ws_res;
	delete[] ws_res_len;
	delete[] ls;
	//C:\Users\Administrator\Desktop\s.txt
};
void B() {//解密
	const int max = 1024;
step_3:
	string f = C();
	wfstream F(f.c_str(), ios::in);
	F.imbue(locale(locale::classic(), new codecvt_utf8<wchar_t>));
	F.seekg(0, F.end);
	int Length = F.tellg();
	F.seekg(0, F.beg);
	if (!F.is_open()) {
		std::cout << "\n无法打开文件!!!\n\n";
		system("cls");
		std::cout << "请输入正确地址!!!\n";
		goto step_3;
	}
	F.close();
	std::locale chs("chs");
	std::ifstream ifs(f.c_str());
	ifs.imbue(chs);
	std::string line, lines;
	cout << endl << "读取中....";
	while (std::getline(ifs, line)) {
		lines = lines + line + "\n";
	}
	cout << endl << "如果密钥不正确,则输出文件为空或者乱码";
	KUR::kurzer kr;
	char* ls = kr.getstr("\n输入此文件的密钥:");
	string key = ls;
	const char* p = key.c_str();
	const int p_len = key.length();
	cout << endl << "开始解密........";
	const unsigned int MAX_ui = 4294967295;
	unsigned int seed = 0, seed_max = 0;
	for (int i = 0; i < p_len && seed_max < MAX_ui; i++) {
		seed = seed_max;
		seed_max += int(*(p + i));
	}
	srand(seed);//lines
	const char* ch = lines.c_str();
	const int lens = lines.length() - 2;
	KUR::Stack<char> C(lens);
	int lens_ = 0;
	for (int i = lens; i >= 0 && !(*(ch + i) == 'K'); i--) {
		lens_ = i - 1;
		*(ch + i) >> C;
	}
	KUR::Stack<int> I(lens);
	char* ch_ = new char[lens_];
	*ch_ = '1';
	for (int i = 0; i < lens_; i++) {
		*(ch_ + i) = *(ch + i);
	}
	int count = 0, Num, num;
	char k;//ch_加密原文,C对应长度,-48,C-.K,I-int
	char* NUM = new char[6];
	int rand_ = 0;
	NUM[5] = '\0';
	while (!C.isempty()) {//提取
		k << C;//读取k
		Num = int(k) - 48;//转数字(leng)
		num = 0;
		for (int i = 0; i < 5; ++i) {
			NUM[i] = '\0';
		}
		for (int i = count; i < count + Num; ++i) {
			NUM[num] = *(ch_ + i);
			num++;
		}
		count += Num;
		rand_ = rand();
		I << (atoi(NUM) - rand_);
	}
	KUR::Stack<wchar_t> W(lens);
	wchar_t W_;
	int w;
	while (!I.isempty()) {
		w << I;
		W_ = wchar_t(w);
		W << W_;
	}
	wstring ws;
	wchar_t wt;
	while (!W.isempty()) {
		wt << W;
		ws += wt;
	};
	string finals = f + "decrypt.txt";
	std::wfstream F_(finals.c_str(), std::ios::out);
	F_.imbue((std::locale)"chs");
	F_ << ws;
	F_.close();
	cout << endl << "文件已保存为:" << endl << finals;
	delete[] ch_;
	delete[] NUM;
};
