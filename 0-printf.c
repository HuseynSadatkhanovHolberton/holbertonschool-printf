#include "main.h"

/**
 * _printf - prints a formatted string
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;
	char *str;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				count += print_char(va_arg(args, int));
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (!str)
					str = "(null)";
				count += print_string(str);
			}
			else if (format[i] == '%')
				count += print_char('%');
			else
				count += print_char('%') + print_char(format[i]);
		}
		else
			count += print_char(format[i]);
		i++;
	}

	va_end(args);
	return (count);
}

