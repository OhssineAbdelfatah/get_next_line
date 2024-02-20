#include "get_next_line.h"
#include "stdio.h"

int main(){
    int fd = open("file",O_RDONLY);
    char *s = get_next_line(fd);
    printf("%s",s);
    printf("%s",get_next_line(fd));
    printf("%s",get_next_line(fd));
    printf("%s",get_next_line(fd));
    printf("%s",get_next_line(fd));
    printf("%s",get_next_line(fd));
    printf("%s",get_next_line(fd));
    free(s);
}