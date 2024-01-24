#include "get_next_line.h"

int ft_strlen(char *s){
    int i ; 
    if (!s)
        return 0;
    i = 0;
    while(s[i])
        i++;
    return i--;
}

char * join(char *s1,char *s2){
    int i = ft_strlen(s1);
    int j = ft_strlen(s2);
    int k = 0 ;
    
    if(!s1)
        return s2;
    puts("abdelfatah");
    char *buffer = malloc(i + j + 1);
    while(s1[i+k])
    {
        s1[i+k] = s2[k];
        k++;
    }
    return buffer;
}