#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char s[12];
	for (int i = 123; i <= 329; i++) {
		sprintf(s, "%d %d %d", i, i * 2, i * 3);
		if (strchr(s, '1') && strchr(s, '2') && strchr(s, '3') && strchr(s, '4') && strchr(s, '5') && strchr(s, '6') && strchr(s, '7') && strchr(s, '8') && strchr(s, '9'))
			printf("%s\n", s);
	}
	return 0;
}
