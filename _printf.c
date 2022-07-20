#include "main.h"

/**
 * _printf - Function that produces output according to a format
 * @format: the format that enters to the function print
 * Return: number of characters printer
 */

int _printf(const char *format, ...)
{

	va_list args;
	int i, j, count;
	var_t type [] = {
		{"c", c_func}, {"s", s_func}, {"%", perc_func}
		{NULL, NULL},
	};
}
