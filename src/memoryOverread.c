#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   char src[5]={'1', '2', '3', '4', '5'};
   char dest[12];
   memset(dest, 'a', sizeof(dest));

   strncpy(dest, src, 10);

   printf("Total copied: %s\n", dest);
}
