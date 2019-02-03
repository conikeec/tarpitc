#include <stdio.h>
#include <string.h> /* memset */
#include <stdlib.h>

int main() {
    int *a, *b;
    printf("\n&PTR: Pointer address");
    printf("\n PTR: Stored address");
    printf("\n*PTR: Stored value\n");

	a = (int*)malloc(sizeof(int));
	memset(a,'\0',sizeof(int));

    printf("\nMalloc:\n&PTR: %x   PTR: %x   *PTR: %x   (memset)", &a, a, *a);
    free(a);
    b = (int*)calloc(1, sizeof(int));
    printf("\nCalloc:\n&PTR: %x   PTR: %x   *PTR: %x\n", &b, b, *b);
}
