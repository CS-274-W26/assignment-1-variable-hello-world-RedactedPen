prog1: prog1.c
	cc prog1.c -g -Wall -Wextra -Wpedantic -o run

clean: 
	rm -f run
