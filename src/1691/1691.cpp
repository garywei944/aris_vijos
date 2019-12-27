#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

#define MAX 10000

int arr[MAX];

int main(int argc, char *argv[]) {
#ifdef DEBUG
	freopen("a.in", "r", stdin);
#endif
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		scanf("%*d %d\n", &arr[i]);
	}

	sort(arr, arr + n);
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += abs(arr[i] - arr[n / 2]);
	}

	cout << sum << endl;

	return 0;
}
