#ifndef _MAIN_H
#define _MAIN_H

/* importing */
#include <stdio.h>
#include <stdarg.h>

/* types and structures */

/**
 * struct vartype - struct vartype
 * @vartype: type of variable to be printed
 * @f: the function associated
 */

typedef struct vartype
{
	char *vartype;
	int (*f)(va_list);
} var_t;


/* macros valores constantes */

/* prototypes */

int _printf(const char *format, ...);

/* macros functions */

#endif /* MAIN_H */
