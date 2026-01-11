#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints formatted output to stdout
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    char *str;
    char c;

    if (!format)
        return (-1);

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
            {
                c = va_arg(args, int);
                count += print_char(c);
            }
            else if (*format == 's')
            {
                str = va_arg(args, char *);
                count += print_string(str);
            }
            else if (*format == '%')
            {
                count += print_char('%');
            }
            else
            {
                /* print unknown specifier as literal */
                count += print_char('%');
                if (*format)
                    count += print_char(*format);
            }
        }
        else
        {
            count += print_char(*format);
        }
        format++;
    }

    va_end(args);
    return (count);
}

