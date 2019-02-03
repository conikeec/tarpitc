#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char buffer1[6] = {'H','A','L','L','O','\0'};
	strcpy(buffer1,argv[1]);
	printf("\nMessage: %s", buffer1);
}

int notexecutable() {
	puts("\nAccess granted!");
	exit(0);
}
