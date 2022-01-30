#define ENABLE_SZN_FUC
#include<SZN_MAI.H>
using namespace std;
using namespace KUR;
void show(int val);
void sets(int& val);
int& leng(Stack<int>& y);
int sum(Kstring& ks);
void ltc(Stack<int>& y);
int main() {
	vector<int>o = { 8,165,1684,98,498,4,984,8 };
	for (vector<int>::iterator pr = o.begin(); pr != o.end(); pr++) {
		*pr = *pr + 1;
	};
	sort(o.begin(), o.end());
	for_each(o.begin(), o.end(), show);
	Stack<int>u(10);
	srand((unsigned int)u.GetHashCode());
	cout << endl;
	for_each(u.begin(), u.Final(), sets);
	u.set(0, 0, u.max_length());
	//u.print();
	int px[]{ 8,6,7,8,4,24,984,89,489 };
	copy(px, px + 8, o.begin());
	sort(o.begin(), o.end());
	for_each(o.begin(), o.end(), show);
	cout << endl;
	vector<string>str = { "awoifahoifwahoif","aoifawoifahfio","wfoaifgyiwofuiwa" };
	/*for (int i = 0; i < u.max_length();i++) {
		cin >> *u(i);
	};*/
	//u.SetFromCin(0, 300);
	//u.print();
	Stack<Kstring>ks;
	cout << ks[end].Data() << 'w';
	Kstring st = "wafwafawf";
	cout << (st << sum) << (st << space);
	cout << "AWfwaf\n";
	cout << (st << space << sum);
	cout << "AWFW\n";
	cout << (ks << Stack<>::TotalCharLength);
	cout << "\nAWFW\n";
	cout << (u << leng);
	u << ltc;
	
	system("pause");
	return 0;
};
int sum(Kstring& ks) {
	return (int)ks.size();
};
void ltc(Stack<int>& y) { y.print(); };
int& leng(Stack<int>& y) { return *y(0); };
void sets(int& val) {
	val = rand();
};
void show(int val) {
	cout << val << ' ';
};
