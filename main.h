#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* _printf prototype */
int _printf(const char *format, ...);

/* Helper functions */
int print_char(char c);
int print_string(char *s);

#endif /* MAIN_H */

