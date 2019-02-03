#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

char * copy_str(char *in_buff)
{
	uint32_t size = strlen(in_buff);
	char * new_buff = malloc(size);
	memcpy(new_buff, in_buff, size);
    
        return new_buff;
}

int main()
{
	char buff[5];
	scanf("%s", buff);
	printf("%s", copy_str(buff));

	return 0;
}