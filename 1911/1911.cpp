#include <iostream>
using namespace std;

int arr[100];

int main() {
	int n, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				if (arr[i] == arr[j] + arr[k]) {
					count++;
					i++;
					j = 0;
					k = 1;
				}
			}
		}
	}

	cout << count << endl;
	return 0;
}

