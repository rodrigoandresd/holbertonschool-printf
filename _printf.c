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
		{"i", d_func}, {"d", d_func},
		{NULL, NULL},
	};
	va_start(args, format);
	i = 0, count = 0, k = 0;
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	/* conditional on null format*/
		return (-1);
	while (format != NULL && format[i] != '\0')
	/* start loop through format string that enter */
	{
		if (format[i] != '%')
		/* conditional different to conversion specification */
			_putchar(format[i]), count++;
			/* ordinary character printing and counting */
		else
		{
			j = 0;
			while (type[j].vartype != NULL)
			/* start loop through array functions*/
			{
				if (*type[j].vartype == format[i + 1])
				{
					k += (type[j].f)(args),	i++;
					break;
				}
				j++;
			}
			if (type[j].vartype == NULL)
				k += 1, _putchar('%');
		}
		i++;
	}
	count += k;
	va_end(args);
	return (count); /* Returns: the number of characters printed */
}
