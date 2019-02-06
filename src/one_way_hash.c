#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/md5.h>

unsigned char digest[MD5_DIGEST_LENGTH];

void print_hash(unsigned char* md) {
    int i;
    printf("MD5: \t\t\t");
    for(i=0; i < MD5_DIGEST_LENGTH; i++) {
        printf("%02x", md[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {

    if(argc != 2) {
        printf("ERROR: Input password string\n");
        exit(1);
    }

    printf("Password String:\t%s\n", argv[1]);

    char* pass = argv[1];
    MD5((unsigned char*) pass, strlen(pass), digest);

    print_hash(digest);

    return 0;
}
