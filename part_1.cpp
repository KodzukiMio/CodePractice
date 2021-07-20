#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
using namespace std;
//void main_1() {
//	double num;
//	double INP_D_Long_Float, OUT_D_Value_1;//double双精度浮点,Inp,Out对应I/O
//	INP_D_Long_Float = 5.12345;
//	OUT_D_Value_1 = sqrt(INP_D_Long_Float);
//	std::cout << "\n" << OUT_D_Value_1 << endl;
//	f(INP_D_Long_Float, OUT_D_Value_1);
//	cout << "input digital:_______________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
//	cin >> num;
//	cin.get();
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//	//ios_base::fixed表示用正常的记数方法显示浮点数；
//	//ios_base::floatfield表示小数点后保留6位小数;
//	cout << endl << num << endl << "press \"Enter\" key to exit the window";
//	int int_ = 1;
//	float float_ = float(int_);//强制类型转换
//	cout << "n" << float_;
//}
//void main_2() {//数组测试
//	short arr_array[7] = { 5,9,8,7,5,6,4 };
//	cout << "数组arr长度>>字节:" << sizeof arr_array << "\n";
//	cout << "数组arr元素个数:" << sizeof arr_array / sizeof(short);
//	//几种方法初始化数组
//	/*int A_test1_array[4] = { 1,2,3 };//将把第4个元素设置为0
//	int A_test2_array[] = { 1,2,3 };
//	int A_test3_array[3];*/
//	float B_test1_float = 7.0f;//7.0为double类型
//	float B_test2_array[] = { 5.2f,3.6f };
//	cout << "\n" << B_test2_array[0] << "与" << B_test2_array[1];
//	//初始化可省略等号;列表不可缩窄!!!
//	double A_test4_array[]{ 5,7 };
//	double A_tets55_array[2]{};
//	char flower[] = "flowe\0r";//不可"flowe r"\0代表空格,所以r不显示
//	char flower_[] = { 'f','l','o','w','e','r' }; //result:flower烫烫烫烫烫烫烫烫烫烫烫烫烫
//	char _flower[] = { 'f','l','.','.','.','\0' };
//	cout << flower << "\n" << flower_;
//	//关于为什么字符用''符号,而字符串用""
//	//char x 'S'表示83 "S" -> 'S','\0'
//}
//void main_3() {//字符串初步操作
//	//1
//	const int _part_num_int = 10;
//	char part_1_str[_part_num_int];//<<[]里面要常量,用const,不可以是变量
//	//char part_1d_str[_part_num_int];
//	char part_2d_str[20];
//	char part_2_str[]{ 'I','n','p','u','t',':','\0' };
//	for (int i = 0; i < strlen(part_2_str); i++) {
//		cout << part_2_str[i];
//	}//使用for要明确数组元素,i不可超过长度
//	cin.getline(part_1_str,10);
//	//不能有空格,如果没有空格cin会自动在末尾添加\0
//	//cin以空格作为结束
//	cout << part_1_str<<":";
//	cin.getline(part_2d_str,20);//读取换行符 20-1=19读取19个元素
//	cout << part_2d_str<<"\n";
//}
//void main_4() {//I/O
//	char str_test[20];
//	char str_test1[20];
//	int num_test[]{1,2,3,4,5};
//	int test_1;
//	cout << "test:";
//	//cin >> test_1;
//	//cin.get();//获取\n
//	(cin >> test_1).get();
//	//同上,(cin >> test_1)返回cin对象与调用成员函数get()拼接
//	cout << "\nPlease enter content(getline)\n(max char is 19!):";
//	cin.getline(str_test,20);//cin.getline丢弃换行符,cin.get不丢弃
//	//如果getline前有换行符\n||\r会停止读取
//	cout << "\n(get:\n";
//	//cin.get()&cin.getline()区别,前者读取字符,后者读取字符串
//	cin.get(str_test1,20);//最好用这个
//
//	cout << "l:" << str_test << "\n(g:" << str_test1;
//	cout << "\n" << static_cast<void*> (num_test);
//}