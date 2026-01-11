#include <unistd.h>
#include "main.h"

/**
 * print_char - prints a single character
 * @c: character to print
 * Return: 1
 */
int print_char(char c)
{
    return write(1, &c, 1);
}

/**
 * print_string - prints a string
 * @s: string to print
 * Return: number of characters printed
 */
int print_string(char *s)
{
    int count = 0;

    if (!s)
        s = "(null)";

    while (*s)
    {
        write(1, s, 1);
        count++;
        s++;
    }
    return count;
}

