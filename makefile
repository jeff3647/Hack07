#
# makefile for image utilities C library
#

CC = gcc
FLAGS = -Wall --std=gnu99
INCLUDES = -lm

imageDriver: imageUtils.o imageDriver.c
	$(CC) $(FLAGS) $(INCLUDES) imageUtils.o imageDriver.c -o imageDriver

imageUtils.o: imageUtils.c imageUtils.h
	$(CC) $(FLAGS) $(INCLUDES) -c imageUtils.c -o imageUtils.o

clean:
	rm -f *~ *.o
