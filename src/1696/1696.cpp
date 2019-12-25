#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int gcd(int a, int b) {
	int c;
	while (a != 0) {
		c = a;
		a = b % a;
		b = c;
	}
	return b;
}

void improper(int a, int b, int c) {
	int g = gcd(b, c);
	b /= g;
	c /= g;
	printf("%d/%d\n", a * c + b, c );
}

void mixed(int a, int b) {
	int g = gcd(a, b);
	a /= g;
	b /= g;
	printf("[%d;%d,%d]\n", a / b, a % b, b);
}

int main(int argc, char *argv[]) {
	freopen("a.in", "r", stdin);
	string str;
	char *buffer = NULL;
	int a, b, c;

	while (cin>>str) {
		buffer = (char*)str.c_str();
		if (sscanf(buffer, "[%d;%d,%d]", &a, &b, &c))
			improper(a, b, c);
		if (sscanf(buffer, "%d/%d", &a, &b))
			mixed(a, b);
	}
	return 0;
}
