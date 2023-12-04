# <p align="center">C - File I/O

## Table of contents

-	[Objective](#Objective)
-	[Requirements](#Requirements)
-	[Mandatory tasks](#Mandatory-tasks)

## Objective

Look for the right source of information online
How to create, open, close, read and write files
What are file descriptors
What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
How to use the I/O system calls `open`, `close`, `read` and `write`
What are and how to use the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`
What are file permissions, and how to set them when creating a file with the open system call
What is a system call
What is the difference between a function and a system call

## Requirements

Allowed editors: `vi`, `vim`, `emacs`
All files will be compiled on Ubuntu 20.04 LTS
Code must follow the `Betty` style
Global variables are not allowed
No more than 5 functions per file
The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden.
Allowed syscalls: `read`, `write`, `open`, `close`
All prototypes for functions should be included in our header file `main.h`

## Mandatory tasks

### 0.Tread lightly, she is near

Write a function that reads a text file and prints it to the POSIX standard output.

### 1.Under the snow

Create a function that creates a file.

### 2.Speak gently, she can hear

Write a function that appends text at the end of a file.

### 3.cp

Write a program that copies the content of a file to another file.
