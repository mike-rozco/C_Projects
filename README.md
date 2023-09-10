# C_Projects

This repository documents my journey of setting up a C development environment, creating a "Hello World" program, and working with Git and GitHub. Here is a summary of the steps and learnings:

## Setting Up the Development Environment

1. Ensure Xcode is installed and functioning properly.
2. Set the path to `…/Contents/Developer` correctly to make sure the compiler and other tools are accessible.

## Compiling a C Program

1. Write a simple C program and save it in a file (e.g., `main.c`).
2. Use a C compiler (like `gcc` or `cc`) to compile the program.
3. Use the `-o` option with the compiler to specify the output file name.

## Setting Up Git and GitHub

1. Initialize a Git repository locally using `git init`.
2. Authenticate with GitHub and create a remote repository.
3. Link the local repository with the remote repository using `git remote add origin [REPOSITORY_URL]`.
4. Make commits locally and push them to the remote repository using `git push -u origin main`.

## Troubleshooting

- If you encounter an error like "pathspec 'message' did not match any file(s) known to git" when trying to commit, make sure to use the `-m` option to specify the commit message.
- If `git push` fails with a "repository not found" error, double-check the repository URL and make sure the repository exists on GitHub.

## Learning Points

- Understanding file permissions in Unix (e.g., 700 gives read, write, and execute permissions to the owner).
- Learning about branching and the role of the 'main' branch.
- Understanding the importance of setting up a `.gitignore` file to prevent unnecessary files from being tracked by Git.

I hope this journey inspires and helps other budding programmers to set up their environments and start coding. Happy coding!
