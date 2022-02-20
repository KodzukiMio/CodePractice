#include <SZN_FUC.H>
using namespace std;
int main(int args1, char** args2) {
	for (int i = 1; i < args1; i++){
		system("cls");
		string s = args2[i];
		cout << s << " success!" << endl;
		string* src = KUR::FastRead_N(args2[i]);
		auto vec1 = KUR::split(*src, "\n");
		delete src;
		while (vec1.size()) {
			int a = KUR::Rand_(0, (int)vec1.size() - 1);
			auto problem = KUR::split(vec1[a], " ");
			string str;
		step:
			system("cls");
			cout << problem[1] << endl << ":";
			cin >> str;
			if (str != problem[0]) {
				goto step;
			};
			auto itor = vec1.begin();
			vec1.erase(itor + a);
		};
		system("cls");
	};
	system("pause");
	return 0;
};