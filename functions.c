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
	return (0);
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
	if (s == NULL)
	{
		s = "(null)";
	}
	i = 0;
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * perc_func - function that prints characters
 * @args: character passed into function
 * Return: success
 */

int perc_func(va_list args)
{
	(void)args;
	_putchar('%');
	return (0);
}

