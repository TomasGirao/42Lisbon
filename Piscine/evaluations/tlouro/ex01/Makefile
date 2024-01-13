# -*- Makefile -*- 

CFLAGS = -Wall -Wextra -Werror

all: ft_cat

ft_cat: main.o ft_putstr.o ft_putfourstr.o
	cc $(CFLAGS) -o $@ main.o ft_putstr.o ft_putfourstr.o

main.o: main.c main.h
	cc $(CFLAGS) -c main.c -o $@

ft_putstr.o: ft_putstr.c main.h
	cc $(CFLAGS) -c ft_putstr.c -o $@

ft_putfourstr.o: ft_putfourstr.c main.h
	cc $(CFLAGS) -c ft_putfourstr.c -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f ft_cat

re: fclean all
