#include "main.h"

/**
 * puts2 - print the 
 * followed by a new line
 * @str: input
 */
void puts2(char *str)
{
        int counter, i;

        counter = 0;

        while (str[counter] != '\0')
        {
                counter++;
        }

        for (i = 0; i < counter; i += 2)
        {
                _putchar(str[i]);
        }

        _putchar('\n');
}
