#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* va_list, va_start, va_arg, va_end */

/* _printf function prototype */
int _printf(const char *format, ...);

/* helper function prototypes */
int print_char(char c);
int print_string(char *s);

#endif /* MAIN_H */

