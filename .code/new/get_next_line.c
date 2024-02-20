#include "get_next_line.h"

char *read_line(int fd,char **buffer){
    ssize_t bf;
    char *seg;
    int end;

    end = 0;
    seg = malloc(BUFFER_SIZE + 1);
    if(fd < 0 || !seg)
        return NULL;
    while(!end)
    {
        bf = read(fd ,seg,BUFFER_SIZE);
        if(bf >= 0)
            seg[bf] = 0 ;
        if(seg[0] == '\0')
            seg = NULL;
        *buffer = ft_join(*buffer,seg);
        if(find_char(*buffer,'\n') != -1 || bf <= 0)
            end = 1;
    }
    seg = trim(*buffer,find_char(*buffer,'\n'));
    
    *buffer = hold_grbg(*buffer,find_char(*buffer,'\n'));
    return seg;
}

char *get_next_line(int fd){
    char *line;
    static char *buffer;

    if(fd < 0 || BUFFER_SIZE <= 0 || read(fd,"",0) < 0 ) 
        return NULL;
    line = read_line(fd,&buffer);
    if(!buffer || !line )
        return NULL;
    return line;    
}