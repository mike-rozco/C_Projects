# Makefile: see makefile.md for details.

# Define some variables for the make script
CC=cc
CFLAGS=-Wall

# Define the target 'all', which just builds 'guess_number'.
.PHONY:
all: guess_number guess_number_v2

# Define the target 'clean', which prepares us for a fresh build.
.PHONY:
clean:
	rm -f guess_number guess_number_v2

# Define the target 'guess_number', which builds the guessing game!
guess_number: guess_number.c
	$(CC) $(CFLAGS) -o guess_number guess_number.c

guess_number_v2: guess_number_v2.c
	$(CC) $(CFLAGS) -o guess_number_v2 guess_number_v2.c

