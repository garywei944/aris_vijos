#include <algorithm>

unsigned int gcd(unsigned int a, unsigned int b) {
	if(a>b)	swap(a, b);
	unsigned int c;
	while (a != 0) {
		c = a;
		a = b % a;
		b = c;
	}
	return b;
}
