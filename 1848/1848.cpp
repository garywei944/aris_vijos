#include <iostream>
using namespace std;

int fun(int n, int x) {
	int count = 0;
	while (n != 0) {
		if (n % 10 == x)	count++;
		n /= 10;
	}
	return count;
}


int main() {
	int n, x, count = 0;
	cin >> n >> x;

	for (int i = 1; i <= n; i++)
		count += fun(i, x);
	cout << count << endl;
	return 0;
}

