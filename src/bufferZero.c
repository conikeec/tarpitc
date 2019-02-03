#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char buffer1[8] = {'B','U','F','F','E','R','1','\0'};
	char buffer2[8] = {'B','U','F','F','E','R','2','\0'};

	printf("\n[BEFORE] Buffer2 contains: %s\n",buffer2);
	printf("[BEFORE] Buffer1 contains: %s\n\n",buffer1);

	strcpy(buffer2,argv[1]);

	printf("[AFTER ] Buffer2 contains: %s\n",buffer2);
	printf("[AFTER ] Buffer1 contains: %s\n\n",buffer1);
}
