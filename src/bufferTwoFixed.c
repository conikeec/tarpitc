#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char buffer1[6] = {'H','A','L','L','O','\0'};
	strncpy(buffer1,argv[1],5);
	printf("\nMessage: %s", buffer1);
}

int notexecutable() {
	puts("\nAccess granted!");
	exit(0);
}
