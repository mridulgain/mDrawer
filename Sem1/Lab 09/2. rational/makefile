all : main.o rational_io.c rational_func.o
	cc main.c rational_io.c rational_func.c -o rat.bin
main.o : main.c rational.h
	cc main.c -c
rational_io.o : rational_io.c rational.h
	cc rational_io.c -c
rational_func.o : rational_func.c rational.h
	cc rational_func.c -c
clean :
	rm -rf *.o
	rm rat.bin
