//modified from thegeekstuff.com/2013/06/buffer-overflow/
#include <stdio.h>
#include <string.h>

int main(void) {
    char buff[15];
    int pass = 0;
    printf("\n Enter password: ");
    fgets(buff, 15, stdin);

    if(strcmp(buff, "thegeekstuff")) {
        printf("\n Wrong password! \n");
    }
    else {
        printf("\n Correct password! \n");
        pass = 1;
    }

    if(pass) {
       /* give root or admin rights to user */
        printf ("Root privileges given to the user \n");
    }
}
