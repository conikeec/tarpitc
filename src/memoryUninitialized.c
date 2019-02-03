#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a, *b;
    printf("\n&PTR: Pointer address");
    printf("\n PTR: Stored address");
    printf("\n*PTR: Stored value\n");
    
	a = (int*)malloc(sizeof(int));
    printf("\nMalloc:\n&PTR: %x   PTR: %x   *PTR: %x  ", &a, a, *a); 
    b = (int*)calloc(1, sizeof(int));
    printf("\nCalloc:\n&PTR: %x   PTR: %x   *PTR: %x\n", &b, b, *b);
}
