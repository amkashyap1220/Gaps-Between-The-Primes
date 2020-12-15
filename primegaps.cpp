#include <iostream>

using namespace std;

bool isPrime(int);

int main() {
	int current = 2, lastp = 2, currentp = 2, lgap = 0;

	while(true) {
		current++;
		if (isPrime(current)) {
			currentp = current;
			int gap = currentp - lastp;
			if (gap > lgap) {
				lgap = gap;
			}
			lastp = currentp;
		}
		if (current % 1000 == 0) {
			cout << "--Prime Gap--" << endl;
			cout << lgap << " current prime: "<< currentp<< endl;
		}	
	}
	
	return 0;
}

bool isPrime(int num) {
	bool flag = true;
	for(int i = 2; i < num; i++) {
		if ((num % i) == 0) {
			flag = false;
		}
	}
	return flag;


}
