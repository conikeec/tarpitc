//Based on http://phrack.org/issues/55/8.html
#include <stdio.h>
#include <stdlib.h>

void func(char *sm) {
	char buffer[8];
	int i;
	int auth = 0;
	for(i = 0; i < 8; i++)
		buffer[i] = sm[i];
	printf("We ran %d times (or %d).\n", auth, i);
	if (auth)
		printf("Authenticated!\n");
}

void main(int argc, char *argv[]) {
	if (argc < 1) {
		printf("Missing arg\n");
		exit(-1);
	}
	func(argv[1]);
}
