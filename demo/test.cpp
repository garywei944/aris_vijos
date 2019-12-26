#include <iostream>
#include <unistd.h>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "hello, world" << endl;
#ifdef DEBUG
	cout << "DEBUG" << endl;
#endif
	int i=0;
	while(1){
		cout<<"this is forever loop "<<i++<<endl;
		sleep(1);
	}
	return 0;
}
