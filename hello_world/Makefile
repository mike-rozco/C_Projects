# Makefile: see makefile.md for details.

# Define some variables for the make script
CC=cc
CFLAGS=-Wall

# Define the target 'all', which just builds 'hello.
.PHONY:
all: hello

# Define the target 'clean', which prepares us for a fresh build.
.PHONY:
clean:
	rm -f hello

# Define the target 'hello', which builds "Hello, World!"
hello: hello.c
	$(CC) $(CFLAGS) -o hello hello.c

