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
## File descriptor


## Contribution
This is a project for [Holberton School](https://www.holbertonschool.com/) by Holberton Students. Pull requests are welcome, if you found a bug, you can report us at the email: [1264@holbertonschool.com](mailto:1264@holbertonschool.com) or [970@holbertonschool.com](mailto:970@holbertonschool.com).
Please make sure to update tests as appropriate.

## Authors
-   [Michael Orlando Cocuy Garzon](https://github.com/TzStrikerYT) - 1264@holbertonschool.com
-   [Lady Marcela Sánchez Moreno](https://github.com/marcewp15) - 970@holbertonschool.com