#include<SZN_MAI.H>
using namespace std;
#define ULL unsigned long long
bool isPrime_4(ULL num);
int main(int argc, char** argv) {
	if (argc == 1) { exit(0); };
	fstream f;
	f.open(argv[1]);
	ULL max_ = 1;
	cout << "生成个数:";
	cin >> max_;
	cout << "生成中...";
	ULL i = 1;
	ULL count = 0;
	while (max_ > count) {
		if (isPrime_4(i)) { f << i << '\n'; count++; };
		i++;
	};
	f.close();
	cout << "\n完成!!!\n";
	system("pause");
	return 0;
};
bool isPrime_4(ULL num){
	if (num == 1 || num == 4)
		return 0;
	if (num == 2 || num == 3)
		return 1;
	if (num % 6 != 1 && num % 6 != 5)
		return 0;
	ULL tmp = (ULL)sqrt(num);
	for (ULL i = 5; i <= tmp; i += 6) {
		if (num % i == 0 || num % (i + 2) == 0)
			return 0;
	}
	return 1;
};