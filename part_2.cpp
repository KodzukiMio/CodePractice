#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
using namespace std;
//void main_5() {//string
//	char char_1[20]{"dwadwad"};
//	char char_2[20];
//	string str_a = "a";
//	string str_b = {"这个比使用char方便和安全b"};
//	string str_c { "这个比使用char方便和安全c" };
//	//常用初始化方法
//	string str_d = str_a;
//	//string类可以赋值给另一个对象,而数组不可以
//	string str_e = str_a + str_b;//类似js对字符串的操作 >> (a+=b)
//	strcpy(char_2,char_1);//copy char_1 to char_2
//	strcat(char_2, "hello");//add "hello" to end of char_1
//	//数组复制注意内存溢出
//	//cout << "str_a:" << str_a << "\tstrd:" << str_d << ",\n" << str_e;
//	cout << str_b.length() << "," << str_b.size() << "," << strlen(char_1);
//	//str_b.length<25>一个汉字2个字符长度!!!
//	string str_f;
//	cout << "\nEnter line of text:";
//	getline(cin,str_f);//另一种方法
//	cout << "\nYou entered:" << str_f;
//	//cout << "\n\"(Who wouldn't?)\",She whispered";
//}
//void main_6() {//struct
//	test_struct new_test{ "chinese",3.1415926,32767 };
//	cout << new_test._string << endl << new_test._double << endl << new_test._int;
//	void function_();
//	struct MyStruct {
//		int x;
//		int y;
//		void function_(int a) {
//			cout << "\n" << a;
//		};
//	}new_struct_1;//另一种声明方式
//
//	new_struct_1.x = 5;
//	cout << "\n" << new_struct_1.x;
//	new_struct_1.function_(new_struct_1.x);
//	struct inflatable {
//		string string_;
//		double double_;
//	};
//	inflatable new_struct_2[]{//类似js对象(结构数组)
//		{"balabal",3.1415926},
//		{"cocolo",5.12345678}
//	};
//	cout << "\n" << new_struct_2[0].string_;
//	union Universal_variable {
//		int int_;
//		double double_;
//		long long_;
//		bool bool_;
//		float float_;
//		char char_;//?
//	};
//	Universal_variable var1_uv;//共用体每次只能储存一种数据类型
//	//上述例子
//	//var1_uv.bool_ = false;
//	//cout << "\n" << var1_uv.bool_;
//	//var1_uv.int_ = 555068;
//	//cout << "\n" << "int:" << var1_uv.int_ << "bool:" << var1_uv.bool_;
//	//>>>>/
//
//	struct message_struct {
//		string name;
//		int age;
//		union
//		{
//			int u_int_;
//		};
//	}message_;
//	message_.u_int_ = 5;
//	cout << "\n" << message_.u_int_;//共用体匿名,不需要中间标识符
//	//
//	struct message_struct_ {
//		string name;
//		int age;
//		union _ {
//			int ID;
//		} detailed;
//	}message_1;
//	message_1.detailed.ID = 7;//共用体有名,需要中间标识符
//	cout << "\n" << message_1.detailed.ID;
//};
//void main_7() {//枚举
//	enum new_types {
//		one = 1,
//		two = 2,
//		three = 3,
//		four = 4,
//		five = 5,
//		six = 6,
//		seven = 7,
//		eight = 8,
//		nine = 9,
//		ten = 10
//	};
//	if (1 < ten) {
//		cout << "s";
//	};
//};