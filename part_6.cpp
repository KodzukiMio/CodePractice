//#include <SZN_FUC.H>
//using namespace std;
//struct F {
//	int x = 0;
//	int y = 0;
//	int z = 0;
//};
//struct _X
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	struct _Y
//	{
//		int x = 0;
//		int y = 0;
//		int z = 0;
//		struct _Z
//		{
//			int x = 0;
//			int y = 0;
//			int z = 0;
//		}Z;
//	}Y;
//}X;
//F retf(F ax, F bx);//prototype
//void show_retf(F c);
////int sum_arr(int arr[], int n);
////int arr_tes(const int* begin, const int* end);
////int sum_array(int(*arr)[3], int  n);
////int statistics(const char* str, char ch);
////char* bstr(char c, int n);
//void main_14() {//function&&pointer
//	/*int n = 1;
//	int x = 1;
//	cout << (n-- > 0) << ":" << (--x > 0);
//	cout << n << ":" << x;*/
//	/*int numbers = 0;
//	int count = 0;
//	cout << "\n����:";
//	cin >> numbers;
//	cout << "\n��ȡ����:";
//	cin >> count;
//	cout << numbers << count;
//	if (cin.fail()) {
//		cout << "\n\nError!!!\n\n";
//		system("pause");
//		exit(EXIT_FAILURE);
//	}*/
//	//int ars[]{ 1,2,3 };
//	//int* ars_p_begin = ars;
//	//int* ars_p_end = &ars[(sizeof(ars) / sizeof(ars[0]))];
//	//cout << sum_arr(ars_p, sizeof(ars) / sizeof(ars[0]));
//	//����������������鳤��,��Ҫ��sizeof arr(ָ��),����õ�����ָ�볤��
//	//cout << endl << arr_tes(ars_p_begin, ars_p_end);
//	//int** pp1;//ָ��ָ���ָ��
//	//int five = 5;
//	//int* p1 = &five;
//	//pp1 = &p1;//ȡַ
//	//cout << **pp1;
//	//int number = 7;
//	//const int* p_1 = &number;//const����int(const int)
//	//����p_1ָ������λ��,��������ʹ��p_1���޸�number��ֵ
//	//int* const p_2 = &number;//const����pointer(const p_2)
//	//����p_2�޸�number��ֵ,��������p_2ָ������λ��
//	//const�ͽ�ԭ��,������ʲô�����޶�ʲô
//	//int data[][3]{ {0,1,2},{3,4,5},{6,7,8} ,{9,10,11} };
//	//cout << endl << sum_array(data, sizeof data / sizeof data[0]);
//	//int(*arrs)[3] = data;
//	//cout << endl << *(arrs + 1)[1] << *(*(arrs + 1) + 1);//6,4
//	//char chr[]="sdf";//chrΪ��һ���ַ��ĵ�ַ
//	//char* chr_p1 = chr;
//	//cout << strlen(chr) << "S" << strlen(chr_p1);
//	//char chars[] = "ssdwadfioafoiawfhisawipofdjasoifhiowahfaflakfoaifyoqaf";
//	//cout << statistics(chars, 'a');
//	//cout << bstr('K', 125);
//	F a = { 1,2,3 };
//	F b = { 2,3,4 };
//	//show_retf(retf(a, b));
//	//cout << X.Y.Z.z << "S";
//	kurzer kur;
//	//cout << kur.GetSystemTime().ignore();
//	//szn.ignore();
//	//cout << kur.szn().GetSystemTime().day;
//	//cout << kur.ignore() << kur.math().distance(2,2,2);
//	cout << "a=9,b=3,c=1";
//	cout << "��һ����:\n";
//	cout << kur.quadratic_d(1,3,1,0);
//	cout << "\n�ڶ�����:"<< kur.quadratic_d(1, 3, 1, 1);
//	//double *p=new double[2][2]{{0,1}{}}
//	cout << "\n:" << kur.quadratic_d(4,1,1,0);
//	cout << "\n:" << kur.quadratic_d(4, 1, 1, 1);
//	cout << "\n:" << kur.quadratic_d(4, 1, 1, 2);
//	cout << "\n:" << kur.quadratic_d(4, 1, 1, 3);
//}
//F retf(F ax, F bx) {
//	F c;
//	c.x = ax.x + bx.x;
//	c.y = ax.y + bx.y;
//	c.z = ax.z + bx.z;
//	return c;
//};
//void show_retf(F c) {
//	using namespace std;
//	cout << endl << "X:" << c.x << endl << "Y:" << c.y << endl << "Z:" << c.z << endl;
//}
//
////char* bstr(char c, int n) {
////	char* pstr = new char[(n + 1) > 127 ? 127 : (n + 1)];
////	pstr[n] = '\0';
////	while (n-- > 0)pstr[n] = c;
////	return pstr;//���ص�ַ
////}
////int statistics(const char* str, char ch) {
////	//ͳ���ַ�ch���ַ������ֵĴ���
////	int total = 0;
////	while (*str) {//*str=='\0'?fasle:true
////		if (*str == ch)++total;
//// //++x(x�ں�,������+�ٱȽ�)
//// //x++(x��ǰ,�����ȱȽ���+)
////		++str;
////	}
////	return total;
////}
////����_array[][3]���͵���ͺ���;
////int sum_array(int(*arr)[3], int  size) {//=>int arr[][3]
////	//int(*arr)[]ָ������int��һ��ָ��
////	//int *arr[],����ָ��int��ָ������
////	int total = 0;
////	for (int i = 0; i < size; ++i) {
////		for (int j = 0; j < 3; ++j) {
////			total += arr[i][j];
////		}
////	}
////	return total;
////};
////int arr_tes(const int* begin, const int* end) {
////	const int* b = begin;
////	int total = 0;
////	for (; b != end; ++b) {
////		//����end��ֵ��ars�±�+1,endָ��������һ��δ֪��ַ
////		total += *b;
////	}
////	return total;
////}
////int sum_arr(int arr[], int n) {//�����arr��һ��ָ��
////	int sum = 0;
////	for (int i = 0; i < n; i++) {
////		sum += arr[i];
////	}
////	cout << "arr:" << sizeof arr << 's';//�����ں�����ʹ��sizeof ָ��
////	return sum;
////}
////int arr_tes(const int arr[], int limit) {//��һ��������const��ֹ�޸�
////	double factor;
////	SZN szn;
////	while (!(cin >> factor)) {
////		cin.clear();
////		szn.ignore();
////		cout << "Bad input!\n";
////	}
////	return 0;
////}