#include <iostream>

using namespace std;

bool isPrime(int);

int main() {
	int current = 2, lastp = 2, currentp = 2, lgap = 0, sgap = 1000;

	while(true) {
		current++;
		if (isPrime(current)) {
			currentp = current;
			int gap = currentp - lastp;
			if (gap > lgap) {
				lgap = gap;
            } else if (gap < sgap) {
                sgap = gap;
            }
			lastp = currentp;
		}
		if (current % 12345 == 0) {
			cout << "--Prime Gaps--" << endl;
			cout << "current prime: " << currentp << endl;
            cout << "Lgap: " << lgap << endl;
            cout << "Sgap: " << sgap << endl;
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
