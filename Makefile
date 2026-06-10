test: ordenamiento.o sorting.o
	gcc ordenamiento.o sorting.o -o test 

ordenamiento.o: ordenamiento.c sorting.h
	gcc -c ordenamiento.c -g

clean:
	rm -f *.o test
