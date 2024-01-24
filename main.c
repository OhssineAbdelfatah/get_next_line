#include "get_next_line.h"

int main(){
    int i = 10;
    while(i--)
        puts(get_next_line(open("file",O_RDWR)));
/*     printf("%d \n",ft_strlen("abde"))
 */}