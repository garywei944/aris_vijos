#include <iostream>
#include <string>
using namespace std;

int N;

struct student {
	string name;
	int qimo, banji;
	char ganbu, xibu;
	int lunwen;
};

int main() {
	cin >> N;
	student stu[N];
	for (int i = 0; i < N; i++) {
		string a;
		int b, c;
		char d, e;
		int f;
		cin >> a >> b >> c >> d >> e >> f;
		stu[i] = {a, b, c, d, e, f};
	}

	int award[N] = {0};
	for (int i = 0; i < N; i++) {
		if (stu[i].qimo > 80 && stu[i].lunwen > 0)	award[i] += 8000;
		if (stu[i].qimo > 85 && stu[i].banji > 80)	award[i] += 4000;
		if (stu[i].qimo > 90)	award[i] += 2000;
		if (stu[i].qimo > 85 && stu[i].xibu == 'Y')	award[i] += 1000;
		if (stu[i].banji > 80 && stu[i].ganbu == 'Y')	award[i] += 850;
	}

	int max = 0, index = 0, total = 0;
	for (int i = 0; i < N; i++) {
		if (award[i] > max) {
			max = award[i];
			index = i;
		}
		total += award[i];
	}

	cout << stu[index].name << endl << award[index] << endl << total << endl;
	return 0;
}
