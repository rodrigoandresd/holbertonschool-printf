#include "main.h"

/**
 * _printf - Function that produces output according to a format
 * @format: the format that enters to the function print
 * Return: number of characters printer
 */

int _printf(const char *format, ...)
{

	va_list args;
	int i, j, k, count;
	var_t type[] = {
		{"c", c_func}, {"s", s_func}, {"%", perc_func},
		{NULL, NULL},
	};

	va_start(args, format);
	i = 0, count = 0, k = 0;
	if (format == NULL)
		return (1);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] != '%')
			_putchar(format[i]), count++;/* For character count */
		else
		{
			j = 0;
			while (type[j].vartype != NULL)
			{
				if (*type[j].vartype == format[i + 1])
				k += (type[j].f)(args);
				i++;
				break;
			}
			j++;
		}
		i++;
	}
	count = k;
	va_end(args);
	return (count);
}
