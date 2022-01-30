#define ENABLE_COLOR
#include<SZN_MAI.H>
void str(std::string&);
int main(int arg1, char** arg2) {
	K_COLOR;
	set_title("test");
	if (arg1 > 1) {
		for (int i = 1; i < arg1; i++) {
			char* path = arg2[i];
			cout << path;
			string *res = FastRead_N(path);
			string result = Subreplace(*res, string(";\n"), string("$$@EC@$$"));
			result = Subreplace(result, string(";"), string("$$@RE@$$"));
			result = Subreplace(result, string("$$@RE@$$"), string(";\n"));
			result = Subreplace(result, string("$$@EC@$$"), string(";\n"));
			KUR::KMiscellaneous::SaveData(path, result);
			delete res;
			cout << " 已格式化.\n";
		};
	};
	system("pause");
	return 0;
}
void str(std::string&st) {
	if (st == "\n")st = "";
	cout << st;
};