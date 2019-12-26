#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "hello, world" << endl;
#ifdef DEBUG
	cout << "DEBUG" << endl;
#endif
	return 0;
}
 
