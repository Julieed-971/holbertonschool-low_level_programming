# <p align="center">C - Hash tables

## Table of contents

-	[Objective](#Objective)
-	[Requirements](#Requirements)
-	[Mandatory tasks](#Mandatory-tasks)

## Objective


-	What is a hash function
-	What makes a good hash function
-	What is a hash table, how do they work and how to use them
-	What is a collision and what are the main ways of dealing with collisions in the context of a hash table
-	What are the advantages and drawbacks of using hash tables
-	What are the most common use cases of hash tables

## Requirements

-	Allowed editors: `vi`, `vim`, `emacs`
-	All files will be compiled on Ubuntu 20.04 LTS
-	Code must follow the `Betty` style
-	Global variables are not allowed
-	No more than 5 functions per file
-	Allowed to use the C standard library
-	Allowed syscalls: `hash_tables.h`
-	All prototypes for functions should be included in our header file `main.h`

## Mandatory tasks

### 0.>>> ht = {}

Write a function that creates a hash table.

### 1.djb2

Write a hash function implementing the djb2 algorithm.

### 2.key -> index

Write a function that gives you the index of a key.

### 3.>>> ht['betty'] = 'cool'

Write a function that adds an element to the hash table.

### 4.>>> ht['betty']

Write a function that retrieves a value associated with a key.

### 5.>>> print(ht)

Write a function that prints a hash table.

### 6.>>> del ht

Write a function that deletes a hash table.
