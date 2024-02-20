#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

char		*get_next_line(int fd);
int			ft_strlen(char *s);
char		*join(char *s1, char *s2);
int	find_char(char *s, char c);
char	*trim_line(char *s);
char	*hold_grbg(char *s);
char *ft_calloc(int count,int size);




#endif
