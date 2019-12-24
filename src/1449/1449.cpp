#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n;
string s[3], r[3];

int code(char c) {
	return c - 'a';
}

bool test(int index) {
	// cout << "test " << index << endl;
	int a = index,
	    b = (index + 1) % 3,
	    c = (index + 2) % 3;
	int k = (s[c][0] - r[a][0] + 26) % 26;
	if (k > 13) {
		k = 26 - k;
		b = (b + 1) % 3;
		c = (c + 2) % 3;
	}
	// cout << "  " << k << " " << s[a] << " " << s[b] << " " << s[c] << endl;
	for (int i = 0; i < n; i++) {
		// cout << "    " << r[a][i] << " " << s[b][i] << " " << s[c][i] << endl;
		if (code(s[c][i]) != (code(r[a][i]) + k + 26) % 26 || code(s[b][i]) != (code(r[a][i]) - k + 26) % 26)
			return 0;
	}
	return 1;
}

int main(int argc, char *argv[]) {
	// freopen("a.in", "r", stdin);
	cin >> n;
	for (int i = 0; i < 3; i++) {
		cin >> s[i];
		r[i] = s[i];
		reverse(r[i].begin(), r[i].end());
	}
	for (int i = 0; i < 3; i++) {
		if (test(i)) {
			cout << r[i] << endl;
			return 0;
		}
	}

	fputs("error\n", stderr);
	exit(1);
}
