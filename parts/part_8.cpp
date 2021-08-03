//#include<SZN_FUC.H>
//using namespace std;
//double (*pf)(int);//指向函数的指针//prot
//double pt(int);//返回指针的函数//prot
//double R(int x, double (*p)(int));
//double* f1(double*, int);
//double* f2(double*, int);
//double* f3(double*, int);
//double* (*pd)(double*, int) = f1;
//double* (*ed[3])(double*, int) = { f1,f2,f3 };
//double(*f)(int) = pt;
//typedef double* ty(double*);
//ty ft;
////auto x = f1;
////auto y = {f1,f2,f3};//
//double* (**df)(double*, int) = ed;//指向包含3个指针函数地址的指针
//auto dr = df;
//int test_(int x);
//void main_14() {//pointer of function
//	pf = pt;
//	cout << R(5, pf);
//	cout << endl << pf(7) << endl << (*pf)(6);//允许不用*符号
//	double x = 7;
//	double* o = &x;
//	double* i = pd(o, 5);
//	cout << endl << *i;
//	delete i;
//	cout << endl << *(*(ed + 1))(o, 7);
//	cout << endl << *ed[0](o, 8);//两种用法
//	auto u = ed;
//	cout << endl << *u[2](o, 9);
//	cout << endl << *ft(o);
//}
//double pt(int x) { return x + 0.00; }
//double R(int x, double (*p)(int)) { return (*p)(x); };
//double* f1(double* p, int x) {
//	double* d = new double(x + *p);
//	return d;
//};
//double* f2(double* p, int x) {
//	double* d = new double(x + *p);
//	return d;
//};
//double* f3(double* p, int x) {
//	double* d = new double(x + *p);
//	return d;
//};
//int test_(int x) {
//	return 0;
//}
//double* ft(double*) {
//	double* x = new double(7.0);
//	return x;
//}
////C:\Windows\System32\taskmgr.exe