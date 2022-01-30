#include<SZN_MAI.H>
using namespace std;
#define ULL unsigned long long
bool isPrime_4(ULL num);
int main(int argc, char** argv) {
	if (argc == 1) { exit(0); };
	fstream f;
	f.open(argv[1]);
	ULL max_ = ULLONG_MAX;
	cout << "���ɷ�Χ:";
	cin >> max_;
	cout << "\n������...";
	for (ULL i = 1; i < max_; i++) {
		if (isPrime_4(i))f << i << '\n';
	};
	f.close();
	cout << "\n���!!!";
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
	ULL tmp = sqrt(num);
	for (ULL i = 5; i <= tmp; i += 6) {
		if (num % i == 0 || num % (i + 2) == 0)
			return 0;
	}
	return 1;
};