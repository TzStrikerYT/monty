# Monty Bytecodes Interpreter


![enter image description here](https://lh3.googleusercontent.com/XmvRPsC57FqdwBUPmFjUlJQdwFgzBxbNLQ7AKewPcoKX5rrkmHvUUboWAZ-gIjsQslW2D6YF-G8 "monty")

## [](https://github.com/TzStrikerYT/monty)Description

An interpreter is a program that directly executes instructions written (one by one) in a script or a programming language, without being previously compiled into a machine language program as needed, normally in this process they do not save the result of such instruction translation, this differentiates it from assemblers and compilers.
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## Learning objectives

-   What do LIFO and FIFO mean.
-   What is a stack, and when to use it.
-   What is a queue and when to use it.
-   What are the common implementations of stacks and queues.
-   What are the most common use cases of stacks and queues.
-   What is the proper way to use global variables.
-   How to work with git submodules.

![enter image description here](https://lh3.googleusercontent.com/zwiEUTcNY8JORqS1pM1patosede3xWcnUe4YHQ1B8tPj-rJW7w9JA4LLSEpeMOgZIgopJxKEyfk "stackqueue")


**resources:** [https://www.geeksforgeeks.org/stack-data-structure-introduction-program/](https://www.geeksforgeeks.org/stack-data-structure-introduction-program/) 

# Requirements
## Installation

Use the  [git clone](https://github.com/TzStrikerYT/monty.git) to install this repository
```
git clone https://github.com/TzStrikerYT/monty.git
```
## Compilation

-   The code will be compiled this way (Installed gcc (GNU Compiler Collection) version 4.8.4 or newer.):
```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

## Usage
In the file descriptor you will find the definitions of opcode.
* Implementing the push and pall opcodes:
```
$ cat -e bytecodes/00.m
push 1$
push 2$
push 3$
pall$
$ ./monty bytecodes/00.m
3
2
1
$
```
* Implementing the pint opcode:
```
$ cat bytecodes/06.m 
push 1
pint
push 2
pint
push 3
pint
$ ./monty bytecodes/06.m 
1
2
3
$ 
```
* Implementing the pop opcode:
```
$ cat bytecodes/07.m 
push 1
push 2
push 3
pall
pop
pall
pop
pall
pop
pall
$ ./monty bytecodes/07.m 
3
2
1
2
1
1
$ 
```
* Implementing swap opcode:
```
$ cat bytecodes/09.m 
push 1
push 2
push 3
pall
swap
pall
$ ./monty bytecodes/09.m 
3
2
1
2
3
1
$
```
* Implementing add opcode:
```
$ cat bytecodes/12.m 
push 1
push 2
push 3
pall
add
pall

$ ./monty bytecodes/12.m
3
2
1
5
1
$
```
* Implementing sub, div, mul, mod opcode:
```
$ cat bytecodes/19.m 
push 1
push 2
push 10
push 3
sub
pall
$ ./monty bytecodes/19.m 
7
2
1
$
``` 

* Implementing pchar opcode:
```
$ cat bytecodes/28.m 
push 72
pchar
$ ./monty bytecodes/28.m 
H
$
```
* Implementing pstr opcode:
```
$ cat bytecodes/31.m 
push 1
push 2
push 3
push 4
push 0
push 110
push 0
push 110
push 111
push 116
push 114
push 101
push 98
push 108
push 111
push 72
pstr
$ ./monty bytecodes/31.m 
Holberton
$ 
```
* Implementing rotl and rotr opcode:
```
$ cat bytecodes/35.m 
push 1
push 2
push 3
push 4
push 5
push 6
push 7
push 8
push 9
push 0
pall
rotl
pall
$ ./monty bytecodes/35.m 
0
9
8
7
6
5
4
3
2
1
9
8
7
6
5
4
3
2
1
0
$
```
* Implementing stack and queue opcode:
```
$ cat bytecodes/47.m
queue
push 1
push 2
push 3
pall
stack
push 4
push 5
push 6
pall
add
pall
queue
push 11111
add
pall
$ ./monty bytecodes/47.m
1
2
3
6
5
4
1
2
3
11
4
1
2
3
15
1
2
3
11111
$ 
```
* Implementing "holberton" (1000-holberton.bf) opcode:
```
$ bf 1000-holberton.bf 
Holberton
$ 
``` 

* Implementing "add tow digits" (1001-add.bf) opcode:
```
$ bf ./1001-add.bf
81
9$
```

* Implementing "multiplication" (1002-mul.bf) opcode:
```
$ bf 1002-mul.bf
24
8$
```

* Implementing "multiplication level up" (1003-mul.bf) opcode:
```
$ bf 1003-mul.bf 
77
49
$ 
```


## File descriptor


|file|description|
|--|--|
|*monty.h*|Contain the struct and prototypes to the monty interpreter|
|*monty.c*|Contain the main function of the monty interpreter|
|*killers.c*|Contain the functions that frees and exit the process in the monty interpreter.|
|*funcs1.c*|Contain the content of the functions pall, pint, pop, swap and add of the monty interpreter.|
|*funcs2.c*|Contain the content of the functions sub, div, mul, mod and pchar of the monty interpreter.|
|*funcs3.c*|Contain the content of the functions pstr, rotl and rotr of the monty interpreter.|
|*check_opcode.c*|Contain the function that check in the monty interpreter for found the command in it.|
|*bf - brainfuck*|Contain brainfuck scripts (1000-holberton.bf, 1001-add.bf, 1002-mul.bf, 1003-mul.bf)|
## Contribution
This is a project for [Holberton School](https://www.holbertonschool.com/) by Holberton Students. Pull requests are welcome, if you found a bug, you can report us at the email: [1264@holbertonschool.com](mailto:1264@holbertonschool.com) or [970@holbertonschool.com](mailto:970@holbertonschool.com).
Please make sure to update tests as appropriate.

## Authors
-   [Michael Orlando Cocuy Garzon](https://github.com/TzStrikerYT) - 1264@holbertonschool.com
-   [Lady Marcela Sánchez Moreno](https://github.com/marcewp15) - 970@holbertonschool.com