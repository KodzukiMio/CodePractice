
////template<class T>class F {
////private:
////	const T x;
////	const int y;
////public:
////	F(T t = NULL) :x(t), y((int)x-1) {
////		this->show();
////	};
////	void show() {
////		cout << x << y << endl;
////	}
////	virtual void show(const T t) {
////		cout << t << endl;
////	}
////	T get(char x) {
////		if (x == 'x') {
////			return T(x);
////		}
////		else if (x == 'y') {
////			return T(y);
////		};
////	}
////};
////template<class T>class R :public F<T> {
////public:
////	R(T d,T x) :F<T>(d) {
////		d = F<T>::get('y');
////		F<T>::show(d);
////		F<T>::show(x);
////	}
////	void out(T d) {
////		cout << d << endl;
////	}
////	void show_(F<T>& f) {
////		cout << f.get('x') << endl;
////	};
////	virtual void show() {
////
////	}
////};
////#define F_R R
////class lam {
////public:
////	virtual void lams() = 0;
////};
////class parent:public lam {
////protected:
////	int ww = 699999999;
////private:
////	int val = 7;
////public:
////	int x = 1;
////	int y = 4;
////	parent() {
////		cout << "R";
////	}
////	virtual ~parent() {
////		cout << "\nPARENT";
////	};
////	virtual void show() {//调用本函数不会指向父类
////		cout << x;//(virtual)有效条件:派生类被通过引用或指针
////	}
////	void show_() {//调用本函数指向父类
////		cout << (x + 1);
////	}
////	void show(const int val) {
////		cout << "FWASDWDAW";
////	}
////	virtual void lams() {
////	};
////};
////class child :public parent {
////public:
////	int x = 2;
////	int y = 5;
////	virtual ~child() {
////		cout << "\nchild";
////	}
////	child(int x = 2, int y = 5) {
////		cout << x << this->ww;
////	}
////	void show_() {
////		cout << (x + 1);
////	}
////	virtual void lams() {
////
////	}
////};
////class yu : public child{//构造了2次函数,分别为parent,child
////public:
////	int x = 8;
////	virtual ~yu() {
////		cout << "\nyu";
////	}
////	yu(int w):x(w) {//默认自动构造
////		cout << x;
////	}
////};
////typedef void (parent::* PAR)(void);
////void main_() {
////	//child T1;
////	//parent T2;
////	//parent* p1 = &T1;
////	//parent* p2 = &T2;
////	//T1.show();
////	//T2.show();
////	//p1->show();//2111
////	//p2->show();//2121+vir(父类)
////	//cout << endl;
////	//T1.show_();
////	//T2.show_();
////	//p1->show_();
////	//p2->show_();//3222
////	//cout << endl;
////	//yu f(6);
////	yu o(7);
////	PAR apr = &parent::show;
////	void(parent:: * ptr)() = &parent::show_;
////	parent w;
////	cout << "我";
////	(w.*ptr)();//指向类非静态成员函数的指针
////	child f;
////	f.show(9);
////	lam* i = &f;
////}
//
//class base {
//public:
//	int* f = NULL;
//	int y = 9;
//	base(int* w) {
//		f = w;
//	}
//	base() {
//
//	}
//	virtual~base() {
//		cout << "这个" << y;
//	}
//	base& operator=(base& b) {
//		if (this == &b) {
//			return *this;
//		}
//		this->y = b.y;
//		return base::operator=(*this);
//	};
//};
//class base1 :public base {
//public:
//	int x = 0;
//	base1(const int w) :x(w) {
//		this->y = x;
//	}
//};
//void main_() {
//	int r = 9;
//	int* w = &r;
//	base1 fw(88);
//	base1 y(65);
//	fw = fw;
//}
