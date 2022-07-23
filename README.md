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

## Function prototypes

All function prototypes used to compile _printf() are included in the header file **main.h**:

*    int _putchar(char c);
*    int _printf(const char *format, ...);
*    int c_func(va_list args);
*    int s_func(va_list args);
*    int perc_func(va_list args);
*    int d_func(va_list args);

## Examples

* ```_printf("Hello, Holberton\n")``` *prints "Hello, Holberton", followed by a new line*
* ```_printf("%s", "Hello")``` *prints "Hello"*
* ```_printf("This is a number: %d", 98)``` *prints "This is a number: 98"*

---

## Authors
[Rodrigo Andres Duque](https://github.com/rodrigoandresd)

[Avelino Carvajal](https://github.com/AvelinoC5)
