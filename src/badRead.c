#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define MIN(a,b) a>b?a:b

int getSize() { return 1000; }



void read_size_scanf(FILE * fd)
{
    int size;
    char buff[50];
    scanf("%d", size);
    read(fd, buff, size);
}


void read_all_external(FILE *fd, int size, char *buff)
{
    read(fd, buff, size);
}

void read_size_external_buffer_internal(FILE *fd, int size)
{
    char buff[50];
    read(fd, buff, size);
}

void read_size_external_buffer_internal_safe(FILE *fd, int size)
{
    char buff[50];
    if (size < sizeof(buff))
    {
        read(fd, buff, size);
    }
}

void read_all_internal_ok_but_tricky(FILE *fd)
{
    char buff[40];
    
    int sz = 5;
    
    
    read(fd, buff, sz);
    
    sz = 200;
    
    printf("%d", sz);
}

void read_all_internal_ok_but_tricky2(FILE *fd)
{
    char buff[40];
    
    int sz;
    sz = 100;
    if (sz > sizeof(buff)) sz = sizeof(buff);
    
    read(fd, buff, sz);
    
    printf("%d", sz);
}

void read_all_internal_ok_but_tricky3(FILE *fd)
{
    char buff[40];
    
    int sz;
    sz = 70000;
    sz = MIN(sizeof(buff), sz);
    
    read(fd, buff, sz);
    
    printf("%d", sz);
}


void read_all_internal_bad_easy(FILE *fd)
{
    char buff[40];
    
    int sz = 50;
    
    
    read(fd, buff, sz);
}


void read_all_internal_bad_h2(FILE *fd)
{
    char buff[40];
    
    int sz = 10;

    sz *= 8;
    
    if (sz > 100) sz = 6;
    
    read(fd, buff, sz);
}

void read_all_internal_ok_hard(FILE *fd)
{
    char buff[40];
    
    int sz = 40;

    sz *= 8;
    
    if (sz > 100) sz = 6;
    
    read(fd, buff, sz);
}


void read_all_internal_ok_hard2(FILE *fd)
{
    char buff[40];
    
    int sz = 70;
    
    if (sz > 100) sz = 0;
    
    read(fd, buff, sz);
    
    if (sz > 30) sz = 0;
}

void read_all_internal_bad(FILE *fd)
{
    char buff[40];
    
    int sz = 10;

    sz *= 8;
    
    if (sz > 100) sz = 6;
    
    read(fd, buff, sz);
}

void read_all_internal_bad_flows(FILE *fd, int mode)
{
    char buff[40];
    
    int sz = 0;
    if (mode == 1) sz = 20;
    if (mode == 2) sz = 200;
    if (mode == 3) sz = 41;
    if (mode == 5) sz = -5;
    
    read(fd, buff, sz);
}

int main()
{
    // open self
    FILE * fd;
    fd = fopen("bad_reads.c", "r");

    char buff[100];
    read_all_external(fd, 5, buff);
    read_all_external(fd, 200, buff);
    
    read_size_external_buffer_internal(fd, getSize());
    
	return 0;
}