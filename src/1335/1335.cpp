#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[9][9];
vector<int> v;

bool check_vector() {
	for (int i = 1; i <= 9; ++i) {
		if (find(v.begin(), v.end(), i) == v.end()) {
			return 0;
		}
	}
	return 1;
}

bool check() {
	for (int i = 0; i < 9; ++i) {
		v.clear();
		for (int j = 0; j < 9; ++j) {
			v.push_back(arr[i][j]);
		}
		if (!check_vector())
			return 0;
	}
	for (int i = 0; i < 9; ++i) {
		v.clear();
		for (int j = 0; j < 9; ++j) {
			v.push_back(arr[j][i]);
		}
		if (!check_vector())
			return 0;
	}
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			v.clear();
			for (int k = 0; k < 3; ++k) {
				for (int p = 0; p < 3; ++p) {
					v.push_back(arr[3 * i + k][3 * j + p]);
				}
			}
			if (!check_vector())
				return 0;
		}
	}
	return 1;
}

int main(int argc, char *argv[]) {
#ifdef DEBUG
	freopen("a.in", "r", stdin);
#endif
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < 9; ++j) {
			for (int k = 0; k < 9; ++k) {
				cin >> arr[j][k];
			}
		}
		if (check())
			cout << "Right" << endl;
		else
			cout << "Wrong" << endl;
	}

	return 0;
}
