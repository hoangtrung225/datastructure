CC=gcc
CFLAGS=-g -std=c99
makeRand:
	$(CC) $(CFLAGS) -o makerand makeRand.c 
