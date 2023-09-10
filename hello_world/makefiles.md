# Makefiles

## About

This section shows the Makefile with lots of annotations.

```Makefile

# This is a Makefile. It is the *traditional* way that C programmers on UNIX
# build their software. For simple programs like "Hello, World!" it is
# overkill, but as your programs become more complex, you will have more
# files, and you will start to appreciate some of the benefits of having
# Makefile. Put simply, a Makefile is a set of instructions for how to build
# your project. It lists all the *targets* that you will build, and also
# lists the *dependencies*.

# The first thing you see in most Makefiles is as section that declares
# variables used in the build process. There are some built-in ones, but
# it is also common to define things yourself so that you can change them
# in one place. For example, here we define CC to just be 'cc', the name
# of the compiler. But suppose we took this to a computer that had a
# different compiler? You could rename it once, here.
CC=cc

# The compiler accepts various flags and options. It is traditional to
# call this variable 'CFLAGS'. Here, I am specifying -Wall, which means
# to tell me about *all* the warnings (a warning is: something the compiler
# is telling you MIGHT be a potential program.) It is my view that you
# you should start out seeing ALL warnings, and heed them. If the compiler
# is warning you about something then it is probably a real problem. If
# you are starting out, then you definitely want to know and dig into it
# a little if you're seeing a warning.
CFLAGS=-Wall

# The section below defines a "target". Make always tries to build the
# first target first, in this case, the target is named "all" and it
# depends on 'hello'.  Which means that in order to build "all" it will
# first have to build the "hello" target.  Now, what is all this ".PHONY"
# business? Well, by default, the make program expects that once a target
# is build that it will produce a file. And if that file isn't produced
# as a result of the build, then it will try to build it the next time
# you run "make."  So here, we are telling "make" that "all" is phony:
# that we're not trying to build a file, we just want to label the target.

.PHONY:
all: hello

# Here we have another PHONY target: "clean". It is the convention to
# have a target in your Makefile called "clean", so that when you type:
# "make clean" that it will delete all the interim files and targets and
# get you back in the state where you can run a fresh build again. Here,
# Our clean target just runs a command to delete "hell" if it exists.
.PHONY:
clean:
	rm -f hello


# FINALLY we get to something interesting. The "hello" target. Here,
# we actually expect the action that's being taken to generate an
# executable file named "hello", so the target is not "phony". The
# action being taken is to run the compiler with the specified flags
# against the file "hello.c".  Note also that the definition of the
# target tells us that "hello" depends on "hello.c". Which means that
# any time hello.c changes, make will realize that and build again.
hello: hello.c
	$(CC) $(CFLAGS) -o hello hello.c
```
