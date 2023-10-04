find_determinant.out: main.o matrix.o
	gcc -Wall -Werror -o determinant.out main.o matrix.o

main.o: main.c matrix.h
	gcc -Wall -Werror -c main.c

matrix.o: matrix.c matrix.h
	gcc -Wall -Werror -c matrix.c

clean:
	rm -rf *.o *.out
