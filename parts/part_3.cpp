//#include<SZN_FUC.h>
//using namespace std;
//void main_8() {//ָ��-1
//	int value_ = 32767;
//	int* p_value;//ָ��
//	p_value = &value_;//��ȡ��ַ
//	//����value_��ʾֵ,��&��ȡ��ַ
//	//����p_value��ʾ��ַ,��*��ȡֵ
//	//*p_value=value_;
//	//p_value=&value;
//	cout << "Values:" << " value_" << "=" << value_ << "\n";
//	cout << "Values:" << " *p_value" << "=" << *p_value << "\n";
//	cout << "address:" << " value_" << "=" << &value_ << "\n";
//	cout << "address:" << " p_value" << "=" << p_value << "\n" << endl;
//	cout << "&p_valueָ�������ַ:" << &p_value << "\n*&p_valueָ�������ַ�����ֵ:" << *&p_value;
//	cout << "\n**&p_valueָ�������ַ'�����ֵ(��ַ)'��Ӧ��ַ��ֵ:" << **&p_value;
//	//��ֵ�֪ʶ;*&���������໥����
//	cout << "\n" << *&**&*&p_value;//value_
//	//����->
//	int v_1;
//	int* p_v_1 = &v_1;
//	//�����Ǵ���ʾ��
//	//int* p;
//	//*p = 123456;//ָ���ֵ��123456,ָ��ĵ�ַָ������?
//	//int* pt;
//	//pt = (int*)0x0000F0370F6FF8C8;//��ָ��ָ��ĵ�ַ
//	string* pt = new string[20];
//	*pt = "sdawddawfg";
//	cout << *pt;
//	delete[] pt;//*pt(sdawddaw)������,��Ҫ��delete[]������delete
//	//deleteֻ������ڴ�,���ռ仹��
//	//����ʾ��,ǧ��Ҫ��δ����ʼ��Ϊ�ʵ���ַ��ָ��������(*����)!!!
//	//cout << "\npt:" << *pt;
//	pt = NULL;
//	cout << "\npt_:" << pt;
//	int* p_some = new int[3];//��̬����
//	p_some[0] = 1;
//	p_some[1] = 2;
//	p_some[2] = 3;
//	cout << "\n��һ��:" << p_some[0];
//	p_some += 1;
//	cout << "\n����Ϊ:" << p_some[0];
//	p_some -= 1;
//	cout << "\nָ�볤��:" << sizeof(p_some);//����ָ������ĳ���
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
//void main_9() {//ָ��-2
//	char flower[7]{ "flower" };//���滹��/0"6+1=7
//	cout << "\n" << flower;//�������ǵ�һ����ַ
//	cout << "\n" << (int*)flower;//int*ǿת��ַ
//	//���鸴��(strlen����Ԫ������,Ϊʵ�ʳ���-1)(step-0)
//	char* new_flower = new char[strlen(flower) + 1];//step-1
//	strcpy(new_flower, flower);//step-2
//	cout << "\n:" << new_flower << ":" << flower;
//	char test_char_1_1[30];
//	//��������ǰ�ȫ�ĸ��Ʒ���,���Ծ��������ڴ渲��
//	strncpy(test_char_1_1, "What's your name?", 20);//strNcpy(no strcpy!)copy 20 char to test_...
//	test_char_1_1[20] = '\0';//step-
//	//>>>up
//	test_struct* s_ps = new test_struct;
//	s_ps->_int = 8;
//	s_ps->_string = "kf";
//	(*s_ps)._double = 3.1415926;//���ַ���
//	cout << "\n" << s_ps->_int << ";" << s_ps->_string << (*s_ps)._double;
//	test_struct* new_ts_p = new test_struct;
//	new_ts_p->_double = 2.0;
//	new_ts_p->_string = "ss";
//	cout << endl << new_ts_p->_double << ":" << new_ts_p->_string;
//}

//void main_10() {//ָ��..
//	SZN szn;
//	///*char* name = szn.getstr();
//	//cout << szn.getstr_(PEC) << "abc:" << name;*/
//	////coutѹջ�Ӻ�ʼ
//	////�����ȵ���name,�ٵ���getstr_(PEC),Ȼ���"abc:"����
//	////���getstr_(PEC)����ֵ+"abc:"+name����ֵ;
//	//struct bbs {
//	//	SZN szn;
//	//	int int_ = 0;
//	//	double double_ = 0.00;
//	//	float float_ = 0.00f;
//	//	char *char_ = szn.getstr("input_:");
//	//}b1,b2,b3;
//	//bbs* sd_p[3] = { &b1,&b2,&b3 };//����bbs��������szn.getstr_(String)�ֱ�ֵ;
//	////sd_p[0]->int_ = 858;
//	////int *df = &sd_p[0]->int_;
//	////cout << sd_p[0]->char_<<sd_p[1]->char_<<sd_p[2]->char_;
//	////auto sa = sd_p;//�Զ��Ƶ�
//	////string char_1 = szn.getstr();
//	////cout <<endl<<char_1;
//	//sd_p[0]->int_ = 7;
//	//sd_p[1]->int_ = 8;
//	//bbs** sd_p_ = sd_p;//���ߵ�ͬ
//	//auto sd_p_1 = sd_p;
//	//cout<<endl<<(*(sd_p_+1))->int_<<endl<<(*(sd_p_1+1))->int_;
//	szn.u_v.u();
//	SZN* d_p = new SZN;
//	void *d_p_ = &d_p;
//}
//static int int_ = 0;
