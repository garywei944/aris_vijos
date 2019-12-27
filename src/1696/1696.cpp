#include <iostream>
#include <cstdlib>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

list<int> fraction;

int gcd(int a, int b) {
	if (a < b)	swap(a, b);
	int c;
	while (b != 0) {
		c = b;
		b = a % b;
		a = c;
	}
	return a;
}

int main(int argc, char *argv[]) {
#ifdef DEBUG
	freopen("a.in", "r", stdin);
#endif
	char c;
	string str;

	while (cin >> c) {
		if (c != '[') {
			// improper to continued fraction
			int a, b;
			cin >> str;
			str = c + str;
			sscanf(str.data(), "%d/%d", &a, &b);
			int c = gcd(a, b);
			a /= c;
			b /= c;

			while (b != 0) {
				fraction.push_back(a / b);
				a = a % b;
				swap(a, b);
			}
			cout << "[" << fraction.front();
			if (fraction.size() != 1)
				cout << ";";
			fraction.pop_front();
			while (fraction.size() > 1) {
				cout << fraction.front() << ",";
				fraction.pop_front();
			}
			cout << fraction.front() << "]\n";
			fraction.pop_front();
		}
		else {
			// continued to improper fraction
			int x;
			scanf("%d", &x);
			fraction.push_front(x);
			while (scanf(",%d", &x) || scanf(";%d", &x)) {
				fraction.push_front(x);
			}
			int a = 1, b = fraction.front();
			fraction.pop_front();
			int t;
			while (!fraction.empty()) {
				t = a + b * fraction.front();
				a = b;
				b = t;
				fraction.pop_front();
			}
			cout << b;
			if (a != 1)
				cout << "/" << a ;
			cout << endl;
			cin >> str;
		}
	}
	return 0;
}
