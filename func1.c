#include "main.h"

/**
 * d_func - print a decimal (base 10) number
 * @args: argument list
 * Return: count
 */
int d_func(va_list args)
{
	int item;
	int unit = 1;
	int base = 10;
	int count = 0;
	int number;

	item = va_arg(args, int);

	if (item < 0)
	{
		_putchar('-');
		number = item * -unit;
		count++;
	}
		else
		{
			number = item;
		}
	while (number / unit >= base)
	{
		unit *= base;
	}
	while (unit != 0)
	{
		_putchar('0' + number / unit);
		number %= unit;
		unit /= base;
		count++;
	}
	return (count);
}

/**
 * i_func - print an integer in base 10
 * @args: argument list
 * Return: count
 */
int i_func(va_list args)
{
	int count = 0;

	count = d_func(args);
	return (count);
}
