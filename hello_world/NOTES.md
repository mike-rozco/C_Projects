# Notes

## Changes

### Function signature of main()

I updated **hello.c** so that the main function had the correct signature to
provide you with access to the argument count and argument list to the
program:

```C
   # Generally, do this...
   int main(int argc, char* argv[]) { ... }

   # ...Instead of this
   int main() { ... }
```

That's because in most real programs, you will have command-line options and
you will want to be able to read them. The way that the operating system
passes them to you is by telling you the count in *argc* and the actual
options in an **array** in *argv*.

### Formatting

Almost all programmers use spaces instead of tabs for formatting. This fact
was addressed humorously in an episode of Silicon Valley, where the main
character's girlfriend broke up with him because they differed on whether
spaces or tabs were better for indenting.

However, as far as I am concerned, using spaces is the right way to go. It's
also the standard at Google, a trustworthy source of best practices in my
opinion.

I don't worry too much about formatting anymore because I use a program
called **clang-format** to format my code.  Installing is left as an
exercise to the user, but it may already exist  on your computer. If not,
on a Mac, there is a package manager called **Homebrew** that can be used
to install tools like this.

The **clang-format** tool can format your code according to preset rules.
I just use Google's rules, so you once you have the tool installed you
can just type:

```bash
   # Reformat the file 'hello.c' according to Google rules. The -i parameter
   # in this command causes the file to be formatted in-place.
   clang-format -style=Google -i hello.c
```

Another tool (also from Google) worth looking into is something called
**cpplint**.  It works for C and C++ as well.  It may also be available
from **Homebrew**.  It is a python script that will go through your code
and make style suggestions.  I love using it so much that I have it hooked
up to my editor so that the editor constantly warns me about stuff.

None of this is strictly necessary for learning, but it's a great idea to
get into good habits. 

### Makefiles

The UNIX program **make** is used to build C/C++ programs (and others.)
Once your projects get bigger, you will want a simple way to build them
than typing commands manually.  The **make** program always defaults to
use a specification called a **Makefile**.  It consists of a bunch of
"rules" about how to build "targets."  I've provided a separate document
in this directory that goes into detail about what the sections do and
mean.

Note: **make** is picky about formatting and actually expects a single
tab character on the line after a target when defining the action. A 
common mistake is to use spaces instead of tabs when writing Makefiles.

This is the ONE TIME, you should be using tabs in source code (source: me :).

## Author
T. Dial 
