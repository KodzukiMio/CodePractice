//#include<SZN_FUC.H>
//using namespace std;
//inline int sx(const int& x) { return x * x; };//接受x+1(接受常量,创建临时变量)
//inline int xs(int& x) { x *= x * x; return x; };//不接受x+1(接受引用)
////内联函数:优点:速度快,缺点:占内存
//#define S(X) ((string(X))+(string(X)));
////宏,如同内联把定义复制到执行处;
////int dx(int&);
//struct yu { int x; };
//void sr(yu& ty);
//yu& tod(yu& Y, const yu& source);
//const yu& clone(yu& t);
//void  main_14() {//function ++
//	////cout << sx(7) << endl;
//	//string b = S("d");
//	////cout << b << endl;
//	//int rats;
//	//int& rod = rats;//引用变量,指向同一地址
//	////等同于:int* const rod = &rats;
//	//int d(8),o(70);
//	////cout << dx(d)<<"s"<<d;//不能用&d
//	//o = (d = -d) + (o = (-d + o));//  o不变,给d取反
//	////cout <<endl<<o << "S" << d;
//	int u = 7;
//	cout << sx(u + 1) << u;
//	int&& o = sx(u + 1);//&&为右值引用
//	yu d = { 7 };
//	cout << endl << d.x;
//	sr(d);
//	cout << endl << d.x << endl;
//	yu T[]{ {8} ,{9},{10} };
//	cout << tod(T[0], T[1]).x;
//	yu dx;
//	dx.x = 7;
//	yu p = clone(dx);
//	cout << p.x;
//}
//void sr(yu& ty) {
//	ty.x += 8;
//};
//yu& tod(yu& Y, const yu& source) {
//	sr(Y);
//	Y.x += source.x;
//	return Y;
//};
//const yu& clone(yu& t) {
//	yu* p;
//	p = &t;
//	return *p;
//};
////int dx(int&x) {
////	int y;
////	y = x;
////	x=x + 1;
////	//cout <<"我" << y <<"的" << x <<"地" << &x <<"值" << &y;
////	return x;
////}