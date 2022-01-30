//#define ENABLE_ZIP
//#include<SZN_FUC.H>
//using namespace std;
//using namespace KUR;
//int main(int arg1, char** arg2) {
//	{
//		if (arg1 > 1) {
//		step:
//			system("cls");
//			char p;
//			cout << "文件名不允许有中文,否则会打包失败!!!\n";
//			cout << "模式:\na : 加密\nb : 解密\n:";
//			cin >> p;
//			if (p == 'a') {
//				for (int i = 1; i < arg1; i++) {
//					char* path = arg2[i];
//					string str;
//					cout << "请输入密码:";
//					cin >> str;
//					cout << path;
//					cout << "\n加密压缩中...\n";
//					EncryptedCompressedFile(path, str);
//					cout << "完成!!!\n";
//				};
//			}
//			else if (p == 'b') {
//				for (int i = 1; i < arg1; i++) {
//					char* path = arg2[i];
//					string str;
//					cout << "请输入密码:";
//					cin >> str;
//					cout << "\n解密中...\n";
//					KUR::DecrypyEncryptedCompressedFile(path, str);
//					cout << "完成!\n";
//				};
//			}
//			else {
//				cout << CODE(arg2[1]);
//				system("pause");
//				goto step;
//			};
//		}
//		else {
//			cout << "请把文件拖放在exe上\n";
//		}; };
//	system("pause");
//	return 0;
//};
