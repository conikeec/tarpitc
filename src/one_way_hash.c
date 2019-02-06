#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/md5.h>

#define SALT_LEN 8

unsigned char digest[MD5_DIGEST_LENGTH];

void log_debug(unsigned char* md) {
    int i;
    printf("MD5: \t\t\t");
    for(i=0; i < MD5_DIGEST_LENGTH; i++) {
        printf("%02x", md[i]);
    }
    printf("\n");
}

void hash_password(char* pass, char* salt) {
    char* salted_pass = strcat(pass, salt);
    MD5((unsigned char*) salted_pass, strlen(salted_pass), digest);
}

void rot(char *str) {
  int i =0;
  for(i=0;str && str[i]; ++i) {
      if(str[i] >= 'a' && (str[i]+13) <='z') {
          str[i] = str[i]+13;
      }
  }
  free(str);
}

char* get_new_salt(char* pass) {
    char* slt = malloc(SALT_LEN);
    memset(slt, '\0', SALT_LEN);
    strncpy(slt, pass, SALT_LEN);
    return slt;
}

char* enhance_salt(char* pass) {
    char* slt = malloc(SALT_LEN);
    memset(slt, '\0', SALT_LEN);
    strncpy(slt, pass, SALT_LEN);
    rot(slt);
    return slt;
}

int main(int argc, char *argv[]) {

    if(argc != 3) {
        printf("ERROR: Input password string and salt\n");
        exit(1);
    }

    printf("Password String:\t%s\n", argv[1]);

    char* pass = argv[1];
    char* slt = get_new_salt(pass);
    hash_password(pass, slt);
    log_debug(digest);

    char* new_slt = enhance_salt(slt);
    log_debug(slt);

    return 0;
}
