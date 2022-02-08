//#include<SZN_FUC.H>
//
//using namespace std;
//using namespace KUR;
//void fin(int a, int b, char c, int d);
//void mul(int b, int& a);
//template<class T>T FUNC(T t) { return t; };
//class A
//{
//public:
//    int a;
//    A(const int b) :a(b) {};
//    ~A() {};
//    void operator()(int d, const int& c,int dc) { a = c + d+dc; std::cout << a << endl; };
//private:
//
//};
//int main() {
//    //template <class _InIt, class _Fn>
//    //_CONSTEXPR20 _Fn for_each(_InIt _First, _InIt _Last, _Fn _Func) { // perform function for each element [_First, _Last)
//    //    _Adl_verify_range(_First, _Last);
//    //    auto _UFirst = _Get_unwrapped(_First);
//    //    const auto _ULast = _Get_unwrapped(_Last);
//    //    for (; _UFirst != _ULast; ++_UFirst) {
//    //        _Func(*_UFirst);
//    //    }
//
//    //    return _Func;
//    //}
//   /* A w(7);
//    Bind_c a(w,8);
//    a(6);*/
//    //Bind_ wf(fin,66);
//    //wf(7);
//    /*A a(7);
//    Bind_c wc(a, 66);*/
//    //Stack<int>p = { 89,498,4,984,98,6 };
//    ////for_each_bind(p.begin(),p.end(),wc);
//    //auto x = Bind2f(mul, 25);
//    //for_each_bind(p.begin(), p.end(), x);
//    //p.print();
//    
//    /*Bind_ fc(fin, 6);
//    fc(7);*/
//    /*vector<int>p = { 564,65,5,56,465,465,4,98,498,4,3 };
//    vector<int>w = { 1,2,3,4,5,6,7,8,9,10,11 };
//    transform(p.begin(), p.end(), w.begin(), p.begin(), [](int& x, int& y)->int {return x + y; });
//    for_each(p.begin(), p.end(), [](int& x)->void {cout << x << endl; });
//    Stack<int>S = { 4,89,789,74,9874,89,748,7,987 };
//    Bind2f b(mul,6);
//    for_each_bind(S.begin(), S.end(), b);
//    cout << endl;
//    for_each(S.begin(), S.end(), [](int& x)->void {cout << x << endl; });
//    sptrn(pp,Stack<int>,88);*/
//    //int x[] = { 5,6544,6,54,65468 };
//    //int&& y = move(x[2]);//移动语义,右值引用
//    //y++;
//    //cout << y << endl << x[2];
//    //function<void(int, int)>fin_f(fin);//包装
//    //auto fx = [&](int x_)->int {return x_ + x[x_]; };
//    //fin_f(7,8);
//    //function<int(int)>fx_f(fx);
//    //cout << fx_f(1);
//    //function<int(int)>FUNC_f(FUNC<int>);
//    //cout << endl << FUNC_f(777);
//    //show(87,489,79,87,987,98,7);
//    Bindf bf(fin,6);
//    bf(7, 'w', 9);
//	system("pause");
//	return 0;
//};
//void mul(int b,int& a) {
//    a *= b;
//};
//void fin(int a, int b,char c,int d) {
//    cout << a << b << c << d;
//};