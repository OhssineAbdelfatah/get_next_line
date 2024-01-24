#include "get_next_line.h"

char *get_next_line(int fd){
    char *line;
    char *buffer;
    ssize_t bf;

    bf = 0;
    line = malloc(BUFFER_SIZE + 1);
    line[BUFFER_SIZE] = 0;
    if (fd < 0)
        return NULL;
    buffer = NULL;
    while((bf = read(fd,line,BUFFER_SIZE)))
    {
/*         printf("%zd \n",bf);
 */        puts(line);
/*         buffer = join(buffer,line);
 */    }
    if (bf == 0)
        return NULL;
    else 
        return buffer;
}
