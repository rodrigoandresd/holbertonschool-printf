# C - printf :computer:



The printf function is responsible for generating a data output based on a specific format. **Rodrigo Duque** and **Avelino Carvajal** created our own print function in the C programming language! (_printf).

___


## Identifiers :fire:

This print the following formats

* c -- character 
* s -- string
* % -- percent
* d -- decimal
* i -- integer


## Flowchart :dart:
[![Prinf.jpg](https://i.postimg.cc/qvVGqJVX/Prinf.jpg)](https://postimg.cc/9rb9Njfr)

___


# Project details :file_folder:


### Prototype
```int _printf(const char *format, ...);```

### Betty style :dancer:

All files are written in C and follow Betty's coding style for Holberton School. For more details, see this page 

[Betty documentation](https://github.com/holbertonschool/Betty/wiki)

### Usage
* Prints a string to the standard output, according to a given format
* All files were created and compiled on Ubuntu 20.04 LTS using GCC 4.8.4 with the command ```gcc -Wall -Werror -Wextra -pedantic *.c```

### Authorized functions and macros

* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)
* _putchar(char c)

### Function prototypes

All function prototypes used to compile _printf() are included in the header file **main.h**:

*    int _putchar(char c);
*    int _printf(const char *format, ...);
*    int c_func(va_list args);
*    int s_func(va_list args);
*    int perc_func(va_list args);
*    int d_func(va_list args);

### Examples

* ```_printf("Hello, Holberton\n")``` *prints "Hello, Holberton", followed by a new line*
* ```_printf("%s", "Hello")``` *prints "Hello"*
* ```_printf("This is a number: %d", 98)``` *prints "This is a number: 98"*

___

## Task :notebook:

### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

Write a function that produces output according to a format.

* Prototype: int _printf(const char *format, ...);
* Returns: the number of characters printed (excluding the null byte used to end output to strings)
* write output to stdout, the standard output stream
* format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
	* c
	* s
	* %
* You don’t have to reproduce the buffer handling of the C library printf function
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

### Solution files:

*  [_printf.c](https://github.com/rodrigoandresd/holbertonschool-printf/blob/main/_printf.c)  [functions.c](https://github.com/rodrigoandresd/holbertonschool-printf/blob/main/functions.c)


### 1. Education is when you read the fine print. Experience is what you get if you don't

Handle the following conversion specifiers:

	* d
	* i
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

### Solution files:

* [_printf.c](https://github.com/rodrigoandresd/holbertonschool-printf/blob/main/_printf.c)  [func1.c](https://github.com/rodrigoandresd/holbertonschool-printf/blob/main/func1.c)

### 2. Just because it's in print doesn't mean it's the gospel

Create a man page for your function.

### Solution files:

*  [man_3_printf](https://github.com/rodrigoandresd/holbertonschool-printf/blob/main/man_3_printf)

---

## Authors
[Rodrigo Andres Duque](https://github.com/rodrigoandresd) - Github

[Avelino Carvajal](https://github.com/AvelinoC5) - Github
