# Makefile: see makefile.md for details.

# Define some variables for the make script
CC=cc
CFLAGS=-Wall

# Define the target 'all', which just builds 'print_arguments'.
.PHONY:
all: print_arguments

# Define the target 'clean', which prepares us for a fresh build.
.PHONY:
clean:
	rm -f print_arguments

# Define the target 'print_arguments', which builds "print_arguments!"
hello: hello.c
	$(CC) $(CFLAGS) -o print_arguments print_arguments.c
