#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i;
	short t=78000;
    int array[100000];

    for(i = 0; i < 100000; i++) {
        array[i] = i;
    }

    printf("\nValue @ position t = %d", array[t]);
    printf("\nValue @ position 78000 = %d", array[78000]);
}
