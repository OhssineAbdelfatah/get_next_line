#include "get_next_line.h"

int ft_strlen(char *s){
    int i;
    i = 0;

    while(s && s[i])
        i++;
    return i;
}

char *hold_grbg(char *buffer,int nl)
{   
    int i ;
    char *new_buffer;
    if(!buffer)
        return NULL;
    i = 0 ;
    new_buffer = malloc(ft_strlen(buffer) - nl);
    if(!new_buffer)
        return NULL;
    while( new_buffer && i < (ft_strlen(buffer) -nl))
    {
        new_buffer[i] = buffer[nl+ 1 + i];
        i++;
    }    
    new_buffer[i] =0;
    // free(buffer);
    return new_buffer;
}

int find_char(char *s,char c)
{
    int i;

    i = 0 ;
    if(!s || s[i] == 0)
        return -1;
    while(s && s[i]){
        if(s[i] == c)
            return i;
        i++;
    }
    return -1;
}

char *trim(char *buff, int nl)
{
    char *line;
    int i;

    i = 0 ;
    if(find_char(buff,'\n') == -1)
        return buff;
    line = malloc(nl + 2);
    if(!line)
        return NULL;
    while(i < nl+1)
    {
        line[i] = buff[i];
        i++;
    }
    line[i] = 0;
    return line;
}

char *ft_join(char *buffer,char *seg )
{   
    int i;
    int k;
    char *new_buff;

    i = 0 ; 
    k = 0 ;
    if(!buffer)
        return seg;
    if(!seg)
        return buffer;
    new_buff = malloc(ft_strlen(buffer) + ft_strlen(seg) +1);
    if(!new_buff)
        return NULL;
    while(i < ft_strlen(buffer))
    {
        new_buff[i] = buffer[i];
        i++;
    }
    while(i < (ft_strlen(buffer) +ft_strlen(seg)))
    {
        new_buff[i] = seg[k];
        k++; 
        i++;
    }
    new_buff[i] = '\0';
    free(buffer);
    return new_buff;
}