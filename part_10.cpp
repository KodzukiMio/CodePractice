//#include <SZN_FUC.H>
//using namespace std;
//void* test(int* k);
//int test(int&& k);
//char test(char d, int g);//函数重载
//struct T_kk {
//	int ir;
//	char c;
//	double d;
//};
//void main_14() {//函数模板
//	cout << test('f', 7);//'m'
//	cout << endl << test(8 + 9) << endl;//&&k,右值引用
//	char d = 'f';
//	char k = 'r';
//	kurzer kur;
//	kur.Swap(d, k);
//	cout << d << k;
//	int f(9);
//	int* f_p = &f;
//	int r(90);
//	int* r_p = &r;
//	kur.Swap(f_p, r_p);
//	cout << endl << f << "S" << r;
//	T_kk fq{ 7,'r',6.5 };
//	T_kk pw{ 8,'s',5.9 };
//	T_s<int, char, double> u{ 8,'r',7.5 };
//	T_s<int, char, double> uf{ 80,'y',9.5 };
//	kur.Swap(fq, pw);
//	cout << fq.ir << pw.c;
//	kur.Swap(u, uf);
//	cout << endl << u.i << "f" << uf.c;
//	cout << kur.Types<string, string>("\nwadaf", "fwafawf");
//}
//void* test(int* k) { cout << *k; return 0; };
//int test(int&& k) { return k; };
//char test(char d, int g) { return d + char(g); };
//#include "SZN_FUC.H"
//int& yu();
//int& yu_();
//static int f = 8;
//void main_14() {
//	static int x = 7;
//	//类似let,static将变量保存在内存,即使函数没有运行
//	int F = yu();
//	cout << F;
//	int X = yu_();
//	cout << X;
//	kurzer kur;
//	cout<<kur.gettime()->tm_year;
//	char b[50];
//	char** d = kur.store(b,10);
//	double t[256];
//	double* r = kur.store(7,r);
//	*r = 7.5;
//	*(r + 1) = 8.6;
//	double** pp = kur.store(t,5);
//	double oi = 843.4;
//	double iu = 464.54;
//	*pp = &oi;
//	cout << endl << *r << "S" << *(r + 1) << "S" << **pp << "S" ;
//	cout << endl << **pp;
//}
//int& yu() {
//	static int f = 5;
//	return ::f;//访问全局变量
//}
//int& yu_() {
//	int x = 7;
//	return x;
//};
