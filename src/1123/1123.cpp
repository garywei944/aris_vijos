#include <iostream>
using namespace std;

int arr[100], m[100];

int main(int argc, char *argv[]) {
#ifdef DEBUG
	freopen("a.in", "r", stdin);
#endif
	int n, sum = 0, r = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		sum += arr[i];
	}
	sum /= n;

	m[0] = arr[0] - sum;
	for (int i = 1; i < n; ++i)
		m[i] = arr[i] + m[i - 1] - sum;
	for (int i = 0; i < n; ++i)
		if (m[i] != 0)
			r++;

	cout << r << endl;

	return 0;
}
