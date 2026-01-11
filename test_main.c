#include "main.h"
#include <stdio.h>

int main(void)
{
    int len1, len2;

    /* Test _printf with string, char, and percent */
    len1 = _printf("Hello %s! %% %c\n", "World", 'A');
    len2 = printf("Hello %s! %% %c\n", "World", 'A');

    /* Compare lengths using strings instead of %d */
    _printf("Custom _printf length: %s\n", "check manually");
    printf("Standard printf length: %d\n", len2);

    return 0;
}

