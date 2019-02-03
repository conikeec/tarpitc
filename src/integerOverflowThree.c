#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	puts("Invited guests for dinner: ");
	scanf ("%d",&i);
	int chairs = i+1;
	printf("We will have %d people, including you. ", chairs);
	puts("Allocating table for our guests...");
	char table[chairs];
}
