# -*- Makefile -*- 

CFLAGS = -Wall -Wextra -Werror

all: ft_display_file

ft_display_file: main.o ft_putstr.o ft_errors.o
	cc $(CFLAGS) -o $@ main.o ft_putstr.o ft_errors.o

main.o: main.c main.h
	cc $(CFLAGS) -c main.c -o $@

ft_putstr.o: ft_putstr.c main.h
	cc $(CFLAGS) -c ft_putstr.c -o $@

ft_errors.o: ft_errors.c main.h
	cc $(CFLAGS) -c ft_errors.c -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f ft_display_file

re: fclean all
