#include <iostream>
#include <cstring>
using namespace std;

bool arr[9];

bool check(int n) {
	for (int i = 0; i < 3; i++) {
		int x = n % 10;
		if (x != 0 && !arr[x - 1]) {
			arr[x - 1] = 1;
		}
		else
			return 0;
		n /= 10;
	}
	return 1;
}

int main(int argc, char *argv[]) {
	for (int i = 123; i <= 329; i++) {
		memset(arr, 0, 9);
		if (check(i) && check(2 * i) && check(3 * i))
			printf("%d %d %d\n", i, 2 * i, 3 * i);
	}
	return 0;
}
