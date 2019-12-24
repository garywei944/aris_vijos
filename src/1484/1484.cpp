#include <iostream>
using namespace std;

char name[14];

int main(int argc, char *argv[]) {
	// freopen("a.in", "r", stdin);
	fgets(name, 14, stdin);
	int x = 1, sum = 0;
	for (int i = 0; i < 12; i++) {
		if (i == 1 || i == 5 || i == 11)
			continue;
		sum += (name[i] - '0') * (x++);
	}
	sum %= 11;
	if ((sum == 10 && name[12] == 'X') || name[12] - '0' == sum) {
		cout << "Right";
		return 0;
	}
	if (sum == 10)
		name[12] = 'X';
	else
		name[12] = sum + '0';
	cout << name << endl;
	return 0;
}
