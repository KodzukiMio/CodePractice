//#include <SZN_FUC.H>
//using namespace std;
//void mes1();
//void mes2();
//void mes3();
//void (*p_f[])() = { &mes1,&mes2,&mes3 };
//auto d = p_f;
//class T {
//private:
//	string s_;
//	void (**p_w)() = p_f;
//	enum class aw { n1, n2, n3 };//不能用enum aw{}
//public:
//	string d = "";
//	int x = 0;
//	T(const string& s) { s_ = s; };//构造函数
//	T() {};
//	T(int n = 0) { this->p_w += (n <= 2 && n >= 0) ? n : 0; };
//	template<class T_>void show(T_ x) { if (x) { cout << x; } else { cout << s_; } };
//	string show_s() {
//		return this->s_;//也可以用T::s_
//	};
//	void sho()const {//这里指示不会修改对象
//		(*this->p_w)();//等同于(*p_w)();
//	};
//	void st() {
//		cout << (0 == int(aw::n1));
//	};
//	void* mes1() { cout << "X"; };
//	void* mes2() { cout << "Y"; };
//	void* mes3() { cout << "Z"; };
//	string* p_d = &s_;
//};
//void mes1() {
//	cout << "X";
//};
//void mes2() {
//	cout << "Y";
//};
//void mes3() {
//	cout << "Z";
//};
//void main_14() {
//	int x = 7, y = 6;
//	using KUR::kurzer;
//	kurzer kurz;
//	cout << kurz.Types(x, y);
//	string df = "Wsd";
//	T xd(df);
//	cout << xd.show_s();
//	string g = "fe";
//	T* p = new T(g);
//	cout << p->show_s();
//	string yx = "wfz";
//	T k{ yx };//这里是构造函数的参数
//	cout << endl;
//	T u(1);
//	u.sho();
//	k.sho();//YX(2>>Y)
//	const int stks = 4;
//	T o[stks]{ 1,2,3,0 };//构造::T(int)
//	cout << endl;
//	for (int i(0); i < stks; ++i) {
//		o[i].sho();//YZXX
//	};
//
//	KUR::Stack<string> yd(10);
//	string fwf = "ws";
//	yd.push(fwf);
//	string* w = new string[10];
//	*w = "w";
//	cout << *w;
//	string *wo;
//	wo=yd.pop();
//	cout << endl << *wo;
//	yd.clear();
//	yd.push(fwf);
//	cout << *yd.pop();
//	KUR::Stack<int>* uip = new KUR::Stack<int>(10);
//	uip->push(8);
//	cout << *uip->pop();
//	uip->clear();
//	uip->push(9999999);
//	cout << uip->isempty() << uip->isfull();
//	cout << *uip->pop();
//	delete uip;
//};