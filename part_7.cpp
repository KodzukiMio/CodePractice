//#include<SZN_FUC.H>
//using namespace std;
////const int string_length = 4; const double zero_d = 0.0;void show(std::array<double, string_length>da); void fill(std::array<double, string_length>* da);
////std::array<double, string_length>express{ zero_d,zero_d,zero_d,zero_d };std::array<std::string, string_length>S{ "I","am","your","father" };struct x { int x; int y; };
////void main_14() { fill(&express); show(express); }
////void show(std::array<double, string_length>da) { double total(0); for (int i(0); i < string_length; ++i)total += da[i]; cout << endl << total; };
////void fill(std::array<double, string_length>* da) { for (int i(0); i < string_length; ++i) { step_1:cout << "\nEnter:" << S[i]; cin >> (*da)[i]; if (!cin) { cin.clear(); cin.get(); goto step_1; } } };
//void back(int n);
//string space(string s, int n, char c);
//void cprint(int lev, char cd, int len, string s);
//void main_14() {
//	//cprint(10,'|',20,s);
//	//cout << "S" << space(s,50,'d') << "D";
//
//};
//void back(int n) {
//	string s = "";
//	cprint(200, '|', 20, s);
//	if (n > 0)back(n - 1);
//	back(n + 1);
//};
//string space(string s, int n, char c) { for (int i(0); i < n; ++i)s += c; return s; };
//void cprint(int lev, char cd, int len, string s) {
//	int sp = 0;
//	string d;
//	for (int i(0); i < lev; ++i) {
//
//		for (int i(0); i < len; ++i) {
//			d += cd + space(s, sp, ' ');
//			//i += d.size();
//		}
//		(sp == 0) ? sp = 1 : sp += 2;
//		cout << endl << d;
//		d = "";
//	}
//};