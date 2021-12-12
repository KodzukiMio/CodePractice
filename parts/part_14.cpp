#define ENABLE_SZN_FUC
#include<SZN_DEF.H>
using namespace std;
void main_();
int main() {
	main_();
	system("pause");
}
_tttct class z {
public:
	TC<Ty> t;
};
_tc class x {
};
_2t class x<int> {

};
class B {
public:
	friend class A;
private:
	int x = 40;
};
class A {
public:
	friend class B;
	void f(B* b) { cout << b->x; };
	friend void fw(B&b);
private:
	int y = 5;
};
void fw(B& b) { A a; a.y = 55; };
void main_() {
	using namespace KUR;
	z<Stack, int>f;
	f.t << 646546 << 54654;
	f.t.print(); 
	B b;
	fw(b);
}