CC = cc 
CFLAGS = -Wall -Wextra -Werror
SRC = main.c get_next_line.c get_next_line_utils.c

NAME = prog

all : $(NAME)

$(NAME) : $(SRC) get_next_line.h
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
clean: 
	rm -fr $(NAME)
re : clean all