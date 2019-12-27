#include <iostream>
#include <unistd.h>
#include <list>
using namespace std;

int main(int argc, char *argv[]) {
	list<int> l;
	l.push_back(5);
	l.push_back(3);
	l.push_back(23);
	l.push_back(56);
	l.push_back(8);

	for(auto it = l.rbegin(); it!=l.rend(); it++){
		cout<<*it<<endl;
	}
	return 0;
}
