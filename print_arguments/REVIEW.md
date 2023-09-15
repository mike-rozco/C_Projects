# Code Review

Your program, as submitted, was perfect except for some minor nitpicks.

First, I would consider using a formatting program like **clang-format**
to format your code. This tool allows the user to specify various
styles to apply, and generally cleans things up really nicely. I think
clang-format can be installed with Homebrew but it may actually install
with X-Code.

What does formatting the code give you? First of all, it can be hard to
read code when the lines are too long. In the old days, terminals were
only 80 characters wide. Many programmers maintain this style to today.
Other people believe this is overkill and select higher limits, but I
have found that letting lines get to long makes it harder to follow so
I just format using **clang-format** and apply the Google coding
format / standard. The command to format *somefile.c* would look like
this:

```bash
   # Assumes clang-format is installed!
   clang-format -style=Google -i somefile.c
```

In that command about, the -style=Google option tells the program
(obviously) to use the Google style when formatting. The -i option tells
**clang-format** to operate directly on the file and change it in place.
If you don't specify -i, it will write the formatted file to the 
standard output: the console.

Whether you choose to use the formatting tool or not (I strongly 
suggest it because it saves time and makes the code look consistent)
you should strive to keep indenting consistent. For example:

```C
   # What looks better...this?
    for (int i = 0; i < 10; ++i) {
 printf("i = %d\n");
 }

   # ...Or this?
   for (int i = 0; i < 10; ++i) {
     printf("i = %d\n");
   }
```

I know where I stand! I prefer the latter.  Having the closing brace of
a for loop indented at the same column as the word d *for* looks cleaner.
Every nesting should also be indented at the next level. For example:

```C
   // Loop over the arguments, starting with the first actual argument.
   for (int i = 1; i < argc; ++i) {
     // Is the current argument equal to the string 'exit'?
     if (0 == strcmp(argv[i], "exit")) {
       // Yes, break out of the for loop.
       printf("The user entered 'exit' as an  argument!\n");
       break;
     }
   }
```

Above, I iterate over all of the real arguments to the function. Note
that I start with the index of 1 in this case because index 0 of **argv**
is always the name of the program itself.  Then, *within* the for loop,
I check to see if the current argument being looped over is equal to the
word *exit*.  If it is, I break out of the loop (stop iterating).

Note indenting and formatting. It is very regular.  Things like looping
statmements an **if** statements start new *scopes*, which can be thought
of as levels of indent. 

You will get into the habit of typing this correctly most of the time, but
it's also something that **clang-format** will do automatically for you
so I definitely suggest getting that. Some languages like **Rust** and
**Go** have strong opinions about formatting and require you to follow
their format. C/C++ do not, but I think choosing a style is a great idea,
and when in doubt, just use the style of one of America's most
celebrated C/C++ users: Google.
