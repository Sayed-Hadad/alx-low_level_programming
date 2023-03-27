#include "main.h"
/**
 *print_rev - prints a string, in reverse
 *
 *@s : input
 *Return : void
 */

void print_rev(char *s)
{
        int counter, i;

        while (s[counter] != '\0')
        {
                counter++;
        }
        for (i = counter-1; i >= 0; i--)
        {
                _putchar(s[i]);
        }
        _putchar('\n');
}
