#include <stdio.h>
#include <stdlib.h>

void main() {
	while(1 == 1) {
	   	double *ptr = (double*) malloc(1000*sizeof(double));
	   	printf("\nMem Addr Allocated:   0x%x", ptr);
	   	free(ptr);
	   	printf("\nMem Addr Unallocated: 0x%x\n\n", ptr);
	}
}
