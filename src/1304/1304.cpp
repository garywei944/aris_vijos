#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define MAX 50

short m, arr[MAX];
string n;

bool check(string n) {
	int size = n.size();
	for (int i = 0; i < size / 2; i++)
		if (n[i] != n[size - i - 1])
			return 0;
	return 1;
}

string step(string x) {
	// cout<<"x: "<<x<<endl;
	string r = x;
	reverse(x.begin(), x.end());
	int size = x.size();
	short a, b;
	memset(arr, 0, MAX);
	for (int i = 0; i < size; i++) {
		a = x[i] - '0';
		b = r[i] - '0';
		if (a > 9)	a -= 7;
		if (b > 9)	b -= 7;
		// cout<<"a: "<<a<<" b: "<<b<<endl;
		arr[i] += a + b;
		if (arr[i] >= m) {
			arr[i] -= m;
			arr[i + 1]++;
		}
		// cout<<"arr["<<i<<"]: "<<arr[i]<<endl;
	}
	string result="";
	if(arr[size]!=0)
		result+="1";
	char c;
	for(int i=size-1; i>=0; i--){
		if(arr[i]>9)
			c = arr[i]+'A';
		else
			c = arr[i]+'0';
		result+=c;
	}
	// cout<<"result: "<<result<<endl;
	return result;
}

int main(int argc, char *argv[]) {
	// freopen("a.in", "r", stdin);
	cin >> m >> n;

	cout<<n<<endl;

	for (int i = 0; i < 30; i++) {
		if (check(n)) {
			cout << "STEP=" << i << endl;
			return 0;
		}
		n = step(n);
	}

	cout << "Impossible!" << endl;
	return 0;
}
