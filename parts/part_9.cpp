//#include<SZN_FUC.H>
//using namespace std;
//inline int sx(const int& x) { return x * x; };//����x+1(���ܳ���,������ʱ����)
//inline int xs(int& x) { x *= x * x; return x; };//������x+1(��������)
////��������:�ŵ�:�ٶȿ�,ȱ��:ռ�ڴ�
//#define S(X) ((string(X))+(string(X)));
////��,��ͬ�����Ѷ��帴�Ƶ�ִ�д�;
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
//	//int& rod = rats;//���ñ���,ָ��ͬһ��ַ
//	////��ͬ��:int* const rod = &rats;
//	//int d(8),o(70);
//	////cout << dx(d)<<"s"<<d;//������&d
//	//o = (d = -d) + (o = (-d + o));//  o����,��dȡ��
//	////cout <<endl<<o << "S" << d;
//	int u = 7;
//	cout << sx(u + 1) << u;
//	int&& o = sx(u + 1);//&&Ϊ��ֵ����
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
////	//cout <<"��" << y <<"��" << x <<"��" << &x <<"ֵ" << &y;
////	return x;
////}