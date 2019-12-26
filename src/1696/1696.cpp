#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
	if (a > b)	swap(a, b);
	int c;
	while (a != 0) {
		c = a;
		a = b % a;
		b = c;
	}
	return b;
}

int main(int argc, char *argv[]) {
#ifdef DEBUG
	freopen("a.in", "r", stdin);
#endif
	string str;

	while (cin >> str) {
		if (str[0] != '[') {
			// improper to continued fraction
			int a, b;
			sscanf(str.data(), "%d/%d", &a, &b);
			
		}
		else {
			// continued to improper fraction
		}
	}
	return 0;
}
