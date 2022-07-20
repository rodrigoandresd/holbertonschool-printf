#include "main.h"

/**
 * c_func - function that prints characters
 * @args: character passed into function
 * Return: success
 */

int c_func(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return 0;
}

/**
 * s_func - function that prints string
 * @args: character passed into function
 * Return: success
 */

int s_func(va_list args)
{
	int i;
	char *s;

	s = va_arg(args, char *);
	for (i = 0 ; s[i] ; i++)
		_putchar(s[i]);
	return 0;
}



