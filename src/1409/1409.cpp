#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>
using namespace std;

int main(int argc, char *argv[]) {
#ifdef DEBUG
	freopen("a.in", "r", stdin);
#endif
	int limit, n, x, r = 0;
	deque<int> l;
	cin >> limit >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		l.push_back(x);
	}
	sort(l.begin(), l.end());
	while (l.size() > 1) {
		r++;
		if (l.back() + l.front() <= limit)
			l.pop_front();
		l.pop_back();
	}
	cout << r + l.size() << endl;
	return 0;
}
