#include <stdio.h>
#include <stdlib.h>

//Home-brewed fixed copy function
void copy_string(char *target, char *source) {
   while (*source) {
      *target = *source;
      source++;
      target++;
   }
   *target = '\0';
}

int main() {
	char buffer[256], newbuffer[256];
    printf("Enter sentence 1: ");
    gets(buffer);
    printf("Buffer content  : %s\n", buffer);    
    printf("Enter sentence 2: ");
    gets(newbuffer);
    copy_string(buffer,newbuffer);
    printf("Buffer content  : %s\n", buffer);
}
