//ʹ��C99��׼
#include"SZN_FUC.H"
#include <codecvt>
using namespace std;
void A(); void B(); string C();
int main() {
	string c;
	cin.clear();
	system("cls");
step_1:
	cout << "\nѡ��ģʽ:" << "\n[A]����" << "\n[B]����\n";
	KUR::kurzer kr;
	c = kr.getstr("ѡ��:");
	if (c == "A") {
		system("cls"); A();
	}
	else if (c == "B") {
		system("cls"); B();
	}
	else {
		cin.clear();
		system("cls");
		cout << "��ѡ����ȷѡ��";
		goto step_1;
	}
	cout << "\n\n";
	system("pause");
	return 0;
}
string C() {
	KUR::kurzer kr;
	cout << endl << "����ʹ�÷Ƿ���ʽ���ļ�!!!\n";
	string c = kr.getstr("����Ŀ���ļ�λ��:");
	return c;
};
void A() {//����
	//--------------��ȡ�ļ�
	const int max = 1024;
step_2:
	string f = C();
	wfstream F(f.c_str(), ios::in);
	F.imbue(locale(locale::classic(), new codecvt_utf8<wchar_t>));
	F.seekg(0, F.end);
	int Length = F.tellg();
	F.seekg(0, F.beg);
	if (!F.is_open()) {
		std::cout << "\n�޷����ļ�!!!\n\n";
		system("cls");
		std::cout << "��������ȷ��ַ!!!\n";
		goto step_2;
	}
	F.close();
	cout << "��ȡ��...";
	wstring ws = KUR::WI(f);
	//------------��ȡ��Կ
	KUR::kurzer kr;
	char* ls = kr.getstr("\n������ļ�����Կ:");
	string key = ls;
	const char* p = key.c_str();
	const int p_len = key.length();
	cout << endl << "��ʼ����........";
	const unsigned int MAX_ui = 4294967295;
	unsigned int seed = 0, seed_max = 0;
	for (int i = 0; i < p_len && seed_max < MAX_ui; i++) {
		seed = seed_max;
		seed_max += int(*(p + i));
	}
	srand(seed);//��������
	//------------------------������
	std::locale chs("chs");
	std::wcout.imbue(chs);
	//--------------ԭ��ת��
	const wchar_t* ws_p = ws.c_str();
	int ws_len = ws.length() - 2;
	int* ws_seed = new int[ws_len];
	int* ws_int = new int[ws_len];
	int* ws_res = new int[ws_len];
	int* ws_res_len = new int[ws_len];
	string keylen, ws_result;
	for (int i = 0; i < ws_len; i++) {
		ws_int[i] = int(ws_p[i]);//ת��
		ws_seed[i] = rand();//��ȡ�����
		ws_res[i] = ws_int[i] + ws_seed[i];
		ws_res_len[i] = to_string(ws_res[i]).length();//��ȡ��Ӧ����
		keylen += to_string(ws_res_len[i]);
		ws_result += to_string(ws_res[i]);
	}
	//----------��װ
	string key_ = "K" + keylen;
	string finals = f + "encryption.txt";
	std::fstream F_(finals.c_str(), std::ios::out);
	F_.imbue((std::locale)"chs");
	F_ << ws_result << key_;
	F_.close();
	cout << endl << "�ɹ�!!!" << endl << "�ļ��ѱ���Ϊ:" << endl << finals;
	delete[] ws_seed;
	delete[] ws_int;
	delete[] ws_res;
	delete[] ws_res_len;
	delete[] ls;
	//C:\Users\Administrator\Desktop\s.txt
};
void B() {//����
	const int max = 1024;
step_3:
	string f = C();
	wfstream F(f.c_str(), ios::in);
	F.imbue(locale(locale::classic(), new codecvt_utf8<wchar_t>));
	F.seekg(0, F.end);
	int Length = F.tellg();
	F.seekg(0, F.beg);
	if (!F.is_open()) {
		std::cout << "\n�޷����ļ�!!!\n\n";
		system("cls");
		std::cout << "��������ȷ��ַ!!!\n";
		goto step_3;
	}
	F.close();
	std::locale chs("chs");
	std::ifstream ifs(f.c_str());
	ifs.imbue(chs);
	std::string line, lines;
	cout << endl << "��ȡ��....";
	while (std::getline(ifs, line)) {
		lines = lines + line + "\n";
	}
	cout << endl << "�����Կ����ȷ,������ļ�Ϊ�ջ�������";
	KUR::kurzer kr;
	char* ls = kr.getstr("\n������ļ�����Կ:");
	string key = ls;
	const char* p = key.c_str();
	const int p_len = key.length();
	cout << endl << "��ʼ����........";
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
	char k;//ch_����ԭ��,C��Ӧ����,-48,C-.K,I-int
	char* NUM = new char[6];
	int rand_ = 0;
	NUM[5] = '\0';
	while (!C.isempty()) {//��ȡ
		k << C;//��ȡk
		Num = int(k) - 48;//ת����(leng)
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
	cout << endl << "�ļ��ѱ���Ϊ:" << endl << finals;
	delete[] ch_;
	delete[] NUM;
};
