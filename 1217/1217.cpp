#include <iostream>
using namespace std;

const int MAX = 4000;
int a[MAX * 2], b[MAX * 2], c[MAX], d[MAX];

int main() {
	char ch;
	int m = 0, n = 0;
	while (cin >> ch && ch != 'E') {
		if (ch == 'W') {
			a[m]++;
			c[n]++;
			if (a[m] >= 11 && a[m] - b[m] > 1)	m++;
			if (c[n] >= 21 && c[n] - d[n] > 1)	n++;
		}
		else {
			b[m]++;
			d[n]++;
			if (b[m] >= 11 && b[m] - a[m] > 1)	m++;
			if (d[n] >= 21 && d[n] - c[n] > 1)	n++;
		}
	}

	for (int i = 0; i <= m; i++)
		cout << a[i] << ":" << b[i] << endl;
	cout << endl;
	for (int i = 0; i <= n; i++)
		cout << c[i] << ":" << d[i] << endl;

	return 0;
}
