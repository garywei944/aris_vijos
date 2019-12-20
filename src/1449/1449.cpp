// #include <iostream>
// #include <cstring>
// using namespace std;

// #define MAX 10000
// int n;
// char s1[MAX], s2[MAX], s3[MAX], rs1[MAX], rs2[MAX], rs3[MAX];

// void reverse(char *d, char *s) {
// 	for (int i = 0; i < n; i++) {
// 		d[n - i - 1] = s[i];
// 	}
// }

// int code(char c) {
// 	return c - 'a';
// }

// int test(char *rs, char *s1, char *s2) {
// 	bool r = 0;
// 	int k;
// 	int a = code(*rs);
// 	int b = code(*s1);
// 	int c = code(*s2);
// 	char *l, *s;
// 	if ((b + c) / 2.0 != a) {
// 		if ((b + c - 26) / 2.0 != a) {
// 			return -1;
// 		}
// 		else {
// 			r = 1;
// 			if (b > c) {
// 				k = c - a;
// 				s = s1;
// 				l = s2;
// 			}
// 			else {
// 				k = b - a;
// 				s = s2;
// 				l = s1;
// 			}
// 		}
// 	}
// 	else {
// 		if (b > c) {
// 			l = s1;
// 			s = s2;
// 			k = b - a;
// 		}
// 		else {
// 			l = s2;
// 			s = s1;
// 			k = c - a;
// 		}
// 	}

// 	// cout << rs << " " << s << " " << l << " " << k << endl;
// 	// cout << a << " " << b << " " << c << endl;

// 	for (int i = 1; i < n; i++) {
// 		// cout << "lrs: " << code(l[i]) << " " << code(rs[i]) << " " << code(s[i]) << " " << r << endl;
// 		// cout << "lrs: " << l << " " << rs << " " << s << " " << k << endl;
// 		if (r) {
// 			if ((l[i] - rs[i] + 26) % 26 != k && (rs[i] - s[i] + 26) % 26 != k)
// 				return -1;
// 		}
// 		else{
// 			if (l[i] - rs[i] != k && rs[i] - s[i] != k)
// 				return -1;
// 		}
// 	}
// 	return k;
// }

// int main(int argc, char *argv[]) {
// 	// freopen("a.in", "r", stdin);
// 	cin >> n >> s1 >> s2 >> s3;
// 	reverse(rs1, s1);
// 	reverse(rs2, s2);
// 	reverse(rs3, s3);

// 	// puts("test");

// 	if (test(rs1, s2, s3) != -1) {
// 		cout << rs1;
// 		return 0;
// 	}
// 	// puts("1");
// 	if (test(rs2, s1, s3) != -1) {
// 		cout << rs2;
// 		return 0;
// 	}
// 	// puts("2");
// 	if (test(rs3, s1, s2) != -1) {
// 		cout << rs3;
// 		return 0;
// 	}

// 	// cout << "Error" << endl;
// 	return 0;
// }


#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int maxn = 1e5 + 7;
char a[maxn], b[maxn], c[maxn];
int n;
bool chk( char* a, char* b, char* c){
    for ( int i=0; i<n; i++ ){
        int x=b[i]-'a';
        int y=c[i]-'a';
        int z=a[n-i-1]-'a';
        if( (x+y-2*z)%26 != 0 ) return false;
    }
    return true;
}
int main(){
    scanf("%d", &n );
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);
    if( chk(a,b,c) ){
        for ( int i=n-1; i>=0; i-- ) printf("%c", a[i] );
    }else if( chk(b,a,c) ){
        for ( int i=n-1; i>=0; i-- ) printf("%c", b[i] );
    }else {
        for ( int i=n-1; i>=0; i-- ) printf("%c", c[i] );
    }
    return 0;
}
