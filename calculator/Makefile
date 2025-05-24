# Makefile: see makefile.md for details.

# Define some variables for the make script
CC=cc
CFLAGS=-Wall

# Define the target 'all', which just builds 'calculator'.
.PHONY:
all: calculator 

# Define the target 'clean', which prepares us for a fresh build.
.PHONY:
clean:
	rm -f calculator 

# Define the target 'calculator', which builds the guessing game!
calculator: calculator.c
	$(CC) $(CFLAGS) -o calculator calculator.c


