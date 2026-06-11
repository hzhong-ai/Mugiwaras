test: ordenamiento.o sorting.o input.o
	gcc ordenamiento.o sorting.o input.o -o test

ordenamiento.o: ordenamiento.c sorting.h piratas.h input.h
	gcc -c ordenamiento.c -g

sorting.o: sorting.c sorting.h
	gcc -c sorting.c -g

input.o: input.c input.h
	gcc -c input.c

clean:
	rm -f *.o test
