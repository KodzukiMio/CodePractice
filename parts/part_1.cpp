#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
using namespace std;
//void main_1() {
//	double num;
//	double INP_D_Long_Float, OUT_D_Value_1;//double˫���ȸ���,Inp,Out��ӦI/O
//	INP_D_Long_Float = 5.12345;
//	OUT_D_Value_1 = sqrt(INP_D_Long_Float);
//	std::cout << "\n" << OUT_D_Value_1 << endl;
//	f(INP_D_Long_Float, OUT_D_Value_1);
//	cout << "input digital:_______________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
//	cin >> num;
//	cin.get();
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//	//ios_base::fixed��ʾ�������ļ���������ʾ��������
//	//ios_base::floatfield��ʾС�������6λС��;
//	cout << endl << num << endl << "press \"Enter\" key to exit the window";
//	int int_ = 1;
//	float float_ = float(int_);//ǿ������ת��
//	cout << "n" << float_;
//}
//void main_2() {//�������
//	short arr_array[7] = { 5,9,8,7,5,6,4 };
//	cout << "����arr����>>�ֽ�:" << sizeof arr_array << "\n";
//	cout << "����arrԪ�ظ���:" << sizeof arr_array / sizeof(short);
//	//���ַ�����ʼ������
//	/*int A_test1_array[4] = { 1,2,3 };//���ѵ�4��Ԫ������Ϊ0
//	int A_test2_array[] = { 1,2,3 };
//	int A_test3_array[3];*/
//	float B_test1_float = 7.0f;//7.0Ϊdouble����
//	float B_test2_array[] = { 5.2f,3.6f };
//	cout << "\n" << B_test2_array[0] << "��" << B_test2_array[1];
//	//��ʼ����ʡ�ԵȺ�;�б�����խ!!!
//	double A_test4_array[]{ 5,7 };
//	double A_tets55_array[2]{};
//	char flower[] = "flowe\0r";//����"flowe r"\0����ո�,����r����ʾ
//	char flower_[] = { 'f','l','o','w','e','r' }; //result:flower��������������������������
//	char _flower[] = { 'f','l','.','.','.','\0' };
//	cout << flower << "\n" << flower_;
//	//����Ϊʲô�ַ���''����,���ַ�����""
//	//char x 'S'��ʾ83 "S" -> 'S','\0'
//}
//void main_3() {//�ַ�����������
//	//1
//	const int _part_num_int = 10;
//	char part_1_str[_part_num_int];//<<[]����Ҫ����,��const,�������Ǳ���
//	//char part_1d_str[_part_num_int];
//	char part_2d_str[20];
//	char part_2_str[]{ 'I','n','p','u','t',':','\0' };
//	for (int i = 0; i < strlen(part_2_str); i++) {
//		cout << part_2_str[i];
//	}//ʹ��forҪ��ȷ����Ԫ��,i���ɳ�������
//	cin.getline(part_1_str,10);
//	//�����пո�,���û�пո�cin���Զ���ĩβ���\0
//	//cin�Կո���Ϊ����
//	cout << part_1_str<<":";
//	cin.getline(part_2d_str,20);//��ȡ���з� 20-1=19��ȡ19��Ԫ��
//	cout << part_2d_str<<"\n";
//}
//void main_4() {//I/O
//	char str_test[20];
//	char str_test1[20];
//	int num_test[]{1,2,3,4,5};
//	int test_1;
//	cout << "test:";
//	//cin >> test_1;
//	//cin.get();//��ȡ\n
//	(cin >> test_1).get();
//	//ͬ��,(cin >> test_1)����cin��������ó�Ա����get()ƴ��
//	cout << "\nPlease enter content(getline)\n(max char is 19!):";
//	cin.getline(str_test,20);//cin.getline�������з�,cin.get������
//	//���getlineǰ�л��з�\n||\r��ֹͣ��ȡ
//	cout << "\n(get:\n";
//	//cin.get()&cin.getline()����,ǰ�߶�ȡ�ַ�,���߶�ȡ�ַ���
//	cin.get(str_test1,20);//��������
//
//	cout << "l:" << str_test << "\n(g:" << str_test1;
//	cout << "\n" << static_cast<void*> (num_test);
//}