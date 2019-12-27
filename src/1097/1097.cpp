#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(int argc, char *argv[]) {
#ifdef DEBUG
	freopen("a.in", "r", stdin);
#endif
	int n, x;
	priority_queue<int, vector<int>, greater<int> > p;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		p.push(x);
	}

	int sum = 0, a, b;
	for (int i = 0; i < n - 1; ++i) {
		a = p.top(); p.pop();
		b = p.top(); p.pop();
		sum += a + b;
		p.push(a + b);
	}
	cout << sum << endl;
	return 0;
}
