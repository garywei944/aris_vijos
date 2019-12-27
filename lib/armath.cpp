#include <algorithm>

unsigned int gcd(unsigned int a, unsigned int b) {
	if (a < b)	swap(a, b);
	unsigned int c;
	while (b != 0) {
		c = b;
		b = a % b;
		a = c;
	}
	return a;
}
