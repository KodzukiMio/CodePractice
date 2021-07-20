//#include <SZN_FUC.h>
//void main_11() {//循环&关系表达式
	//SZN szn;
	//char* atf[] = { szn.getstr("\n输入:") };
	//int x = 2;
	//{//用括号括起来作为局部
	//	int x = 1;
	//	cout << endl << x;
	//}
	//cout << endl << x;
	//int y, j;
	//for (y = 0, j = 10; y < j; ++y, --j) {
	//	//这里的y=0,j=10逗号可将几条语句合成一条
	//	cout << endl << y << ":" << j;
	//}
	//if (strcmp(atf[0], "ks")) {//(strcmp->true)->(return false)
	//	cout << "\nOK";
	//}
	//string num;
	//do {
	//	num = szn.getstr("你是SB吗? [YES/NO]:");
	//} while (num != "yes" && num != "YES");
	////回答YES或者yes执行下一步
	////目前已知方法
	//cout << "\n很好\n";
	//int ints_[]{ 1,2,3,4,5,8 };
	//for (int x : ints_) {//类似js的for in 
	//	cout << x;
	//}
	//char ch;
	//int count = 0;
	//cin.get(ch);
	////while (!cin.fail()) {
	//////ctrl+Z模拟EOF,使之跳出循环;EOF->cin.fail()->true->!->false->escape
	////	cout << ch;
	////	++count;
	////	cin.get(ch);
	////}//同等如下
	//while (!cin.fail() && count != 10) {//回车也算输入
	//	cout << ch;
	//	cin.get(ch);
	//	count++;
	//	cout <<":" << count;
	//}
	//cin.clear();//清除EOF
	//
	//cout << endl << count << " characters read\n";
	//int ch;
	//int count = 0;
	//ch = cin.get();
	//while (!(ch == EOF)) {
	//	cout.put(ch);
	//	++count;
	//	ch = cin.get();
	//	//建议用cin.get(ch);返回的是istream对象
	//}
	//cin.clear();
	//int temps[5][5];
	//for (int i = 0; i < 5; ++i) {
	//	for (int i_ = 0; i_ < 5; ++i_) {
	//		temps[i][i_] = i_;
	//	};
	//}
	//for (int i = 0; i < 5; ++i) {
	//	for (int i_ = 0; i_ < 5; ++i_) {
	//		cout << temps[i][i_]<<"\t";
	//	};
	//	cout << endl;
	//}//打印5*5的矩阵[0,1,2,3,4]*5
	//string h = "S";
	//string* h_p = &h;
	//string * bs[]{
	//	h_p,
	//};
	//cout << *bs[0];//->"S";
//}
