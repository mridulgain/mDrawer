all : main.o showDetails.o editElement.o editSeq.o showList.o
	cc main.c showDetails.c editElement.c editSeq.c showList.c -o list.bin
main.o : main.c list.h
	cc -c main.c
showDetails.o : showDetails.c list.h
	cc -c showDetails.c
editElement.o : editElement.c list.h
	cc -c editElement.c
editSeq.o : editSeq.c list.h
	cc -c editSeq.c
showList.o : showList.c list.h
	cc -c showList.c
clean :
	rm -rf *.o
	rm list.bin

