NAME = libftprintf.a
SRCFILES = printhex.c  printdigit.c  printstr.c ft_printf.c			
OBJECTFILES = $(SRCFILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJECTFILES)
	ar rcs $(NAME) $(OBJECTFILES)

%.o: %.c libftprintf.h
	cc -Wall -Wextra -Werror -o $@ -c $<

clean:
	rm -f $(OBJECTFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
