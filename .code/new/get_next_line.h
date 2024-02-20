#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE 
#define BUFFER_SIZE 30
#endif

#include<stdlib.h>
#include<stdio.h>

#include<unistd.h>
#include<fcntl.h>


int ft_strlen(char *s);
char *get_next_line(int fd);
char *hold_grbg(char *buffer,int nl);
int find_char(char *s,char c);
char *trim(char *buff, int nl);
char *ft_join(char *buffer,char *seg );


char *hold_grbg(char *buffer,int nl);
int find_char(char *s,char c);


#endif