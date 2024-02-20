#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#ifndef BUFFER_SIZE
    #define BUFFER_SIZE 2
#endif
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<stdio.h>

char *get_next_line(int );
int ft_strlen(char *);
char * join(char *,char *);

#endif