#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>  /* For va_list, va_start, va_arg, va_end */
#include <stdio.h>   /* For printf */

/* Function Prototypes */
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */

