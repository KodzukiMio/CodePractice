//#include<SZN_FUC.h>
//using namespace std;
//void main_8() {//指针-1
//	int value_ = 32767;
//	int* p_value;//指针
//	p_value = &value_;//获取地址
//	//变量value_表示值,用&获取地址
//	//变量p_value表示地址,用*获取值
//	//*p_value=value_;
//	//p_value=&value;
//	cout << "Values:" << " value_" << "=" << value_ << "\n";
//	cout << "Values:" << " *p_value" << "=" << *p_value << "\n";
//	cout << "address:" << " value_" << "=" << &value_ << "\n";
//	cout << "address:" << " p_value" << "=" << p_value << "\n" << endl;
//	cout << "&p_value指针变量地址:" << &p_value << "\n*&p_value指针变量地址储存的值:" << *&p_value;
//	cout << "\n**&p_value指针变量地址'储存的值(地址)'对应地址的值:" << **&p_value;
//	//奇怪的知识;*&两个符号相互抵消
//	cout << "\n" << *&**&*&p_value;//value_
//	//例子->
//	int v_1;
//	int* p_v_1 = &v_1;
//	//下面是错误示范
//	//int* p;
//	//*p = 123456;//指针的值是123456,指针的地址指向哪里?
//	//int* pt;
//	//pt = (int*)0x0000F0370F6FF8C8;//给指针指向的地址
//	string* pt = new string[20];
//	*pt = "sdawddawfg";
//	cout << *pt;
//	delete[] pt;//*pt(sdawddaw)是数组,需要用delete[]而不是delete
//	//delete只清空了内存,而空间还在
//	//错误示范,千万不要对未被初始化为适当地址的指针解除引用(*符号)!!!
//	//cout << "\npt:" << *pt;
//	pt = NULL;
//	cout << "\npt_:" << pt;
//	int* p_some = new int[3];//动态数组
//	p_some[0] = 1;
//	p_some[1] = 2;
//	p_some[2] = 3;
//	cout << "\n第一个:" << p_some[0];
//	p_some += 1;
//	cout << "\n现在为:" << p_some[0];
//	p_some -= 1;
//	cout << "\n指针长度:" << sizeof(p_some);//不是指向数组的长度
//	delete[] p_some;
//	p_some = NULL;
//	/*int size_abc;
//	cout << "\ninput:";
//	cin >> size_abc;
//	cin.get();*/
//	int* p_abc = new int[5];
//	p_abc[0] = 785;
//	p_abc[1] = 541;
//	cout << endl << p_abc << ":" << *(p_abc+1);
//	delete[] p_abc;
//	p_abc = NULL;
//
//};
//void main_9() {//指针-2
//	char flower[7]{ "flower" };//后面还有/0"6+1=7
//	cout << "\n" << flower;//数组名是第一个地址
//	cout << "\n" << (int*)flower;//int*强转地址
//	//数组复制(strlen返回元素数量,为实际长度-1)(step-0)
//	char* new_flower = new char[strlen(flower) + 1];//step-1
//	strcpy(new_flower, flower);//step-2
//	cout << "\n:" << new_flower << ":" << flower;
//	char test_char_1_1[30];
//	//下面这个是安全的复制方法,可以尽量避免内存覆盖
//	strncpy(test_char_1_1, "What's your name?", 20);//strNcpy(no strcpy!)copy 20 char to test_...
//	test_char_1_1[20] = '\0';//step-
//	//>>>up
//	test_struct* s_ps = new test_struct;
//	s_ps->_int = 8;
//	s_ps->_string = "kf";
//	(*s_ps)._double = 3.1415926;//两种方法
//	cout << "\n" << s_ps->_int << ";" << s_ps->_string << (*s_ps)._double;
//	test_struct* new_ts_p = new test_struct;
//	new_ts_p->_double = 2.0;
//	new_ts_p->_string = "ss";
//	cout << endl << new_ts_p->_double << ":" << new_ts_p->_string;
//}

//void main_10() {//指针..
//	SZN szn;
//	///*char* name = szn.getstr();
//	//cout << szn.getstr_(PEC) << "abc:" << name;*/
//	////cout压栈从后开始
//	////这里先调用name,再调用getstr_(PEC),然后把"abc:"传入
//	////输出getstr_(PEC)返回值+"abc:"+name返回值;
//	//struct bbs {
//	//	SZN szn;
//	//	int int_ = 0;
//	//	double double_ = 0.00;
//	//	float float_ = 0.00f;
//	//	char *char_ = szn.getstr("input_:");
//	//}b1,b2,b3;
//	//bbs* sd_p[3] = { &b1,&b2,&b3 };//这里bbs调用三次szn.getstr_(String)分别赋值;
//	////sd_p[0]->int_ = 858;
//	////int *df = &sd_p[0]->int_;
//	////cout << sd_p[0]->char_<<sd_p[1]->char_<<sd_p[2]->char_;
//	////auto sa = sd_p;//自动推导
//	////string char_1 = szn.getstr();
//	////cout <<endl<<char_1;
//	//sd_p[0]->int_ = 7;
//	//sd_p[1]->int_ = 8;
//	//bbs** sd_p_ = sd_p;//两者等同
//	//auto sd_p_1 = sd_p;
//	//cout<<endl<<(*(sd_p_+1))->int_<<endl<<(*(sd_p_1+1))->int_;
//	szn.u_v.u();
//	SZN* d_p = new SZN;
//	void *d_p_ = &d_p;
//}
//static int int_ = 0;
