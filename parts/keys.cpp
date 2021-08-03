//#include <SZN_FUC.H>
//string dec_(string* content, string* keys);
//void dec() {//简单文件IO
//	cin.clear();
//	system("cls");
//	cin.ignore(std::numeric_limits< streamsize >::max(), '\n');
//	//^能清的全部清掉
//	using namespace std;
//	SZN szn;
//	ofstream OTF;
//	ifstream ITF;
//	string str_t;
//step_1:
//	std::cout << "<EI>\t输入待加密的文本";
//	std::cout << "\n<EF>\t读取文件待加密的内容";
//	std::cout << "\n<DT>\t输入待解密的文本";
//	std::cout << "\n<DF>\t读取文件待解密的内容";
//	std::cout << "\n注意:文本不能有换行符!!!";
//	str_t = szn.getstr("\nYOU CHOISE:");
//	if (str_t == "EI") {
//		system("cls");
//		string string_txt;
//		string_txt = szn.getstr("\n输入内容:");
//		//TOOD
//	}
//	else if (str_t == "EF") {
//		system("cls");
//	}
//	else if (str_t == "DT") {
//		system("cls");
//	}
//	else if (str_t == "DF") {
//		system("cls");
//		string inp = szn.getstr("\n输入文件地址:");
//		ITF.open(inp);
//		if (!ITF.is_open()) {
//			std::cout << "\n无法打开文件!!!\n\n";
//			system("pause");
//			exit(EXIT_FAILURE);
//		};
//		char chr;
//		string keys = "";
//		string content = "";
//		char chr_;
//		while (ITF.good()) {
//			ITF >> chr;
//			if (chr == 'K') {
//				for (; ITF >> chr_;) {
//					keys += chr_;
//				}
//				cout << "\nsucceed!";
//				cout << endl << keys << "read!\n";
//				string* keys_p = &keys;
//				string* content_p = &content;
//				string result = dec_(content_p, keys_p);
//				OTF.open("DF_Decrypt.txt");
//				OTF << result;
//				OTF.close();
//				cout << "\nThe result has been saved as DF_Decrypt.txt\n";
//				szn.ignore();
//				goto step_1;
//			}
//			content += chr;
//		}
//	}
//	else {
//		system("cls");
//		std::cout << "输入错误,请重新输入!!!\n\n";
//		goto step_1;
//	};
//
//
//}
//string dec_(string* content, string* keys) {
//	return "S";//TOOD
//}
//void main_13() {
//	//SZN szn;
//	cin.ignore(std::numeric_limits< streamsize >::max(), '\n');
//	//清空输入流
//	ofstream OTF;
//	ifstream ITF;
//	OTF.open("read_test.txt");
//	OTF << "ENGLISH MAKES ME HAPPY!";
//	OTF.close();
//	ITF.open("read_test.txt");
//	if (!ITF.is_open()) {//检测是否打开成功
//		std::cout << "\n无法打开文件!!!\n\n";
//		system("pause");
//		exit(EXIT_FAILURE);
//	};
//	ITF.close();
//	//tset^
//	const int SIZE = 60;
//	char filename[SIZE];
//	ifstream inFile;
//	//cin.get();
//	std::cout << "Enter filename\n";
//	cin.getline(filename, SIZE);
//	inFile.open(filename);
//	if (!inFile.is_open()) {
//		std::cout << "\n无法打开文件!!!\n\n";
//		system("pause");
//		exit(EXIT_FAILURE);
//	};
//	double value;
//	double sum = 0.0;
//	int count = 0;
//	inFile >> value;
//	while (inFile.good()) {//good检测最后一次读取是否成功
//		++count;
//		sum += value;
//		inFile >> value;
//	}
//	/*while (inFile>>value){
//		++count;
//		sum += value;
//	}*/
//	std::cout << "\nread:" << count;
//	std::cout << "\nSUM:" << sum;
//	if (inFile.fail()) {
//		std::cout << "\nInput terminated by data mismatch.";
//	}
//
//}