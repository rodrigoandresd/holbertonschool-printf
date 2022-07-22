#include "main.h"

/**
 * d_func - print a decimal (base 10) number
 * @args: argument list
 * Return: count
 */

int d_func(va_list args)
{
	int item;
	int count = 0;
	unsigned int unit = 1;
	unsigned int base = 10;
	unsigned int number;

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
