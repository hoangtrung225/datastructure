CC=gcc
CFLAGS=-g -std=c99
makeRand:
	$(CC) $(CFLAGS) -c myfunc.c
printArray:
	$(CC) $(CFLAGS) -o printarray printarray.c
sortprogram:sortprogram.o sortfunc.o
	$(CC) $(CFLAGS) -o sortprogram sortprogram.o sortfunc.o
sortprogram.o:sortprogram.c sortfunc.h
	$(CC) $(CFLAGS) -c sortprogram.c
sortfunc.o:sortfunc.c sortfunc.h
	$(CC) $(CFLAGS) -c sortfunc.c
clean:
	rm *.o printarray sortprogram a.out
