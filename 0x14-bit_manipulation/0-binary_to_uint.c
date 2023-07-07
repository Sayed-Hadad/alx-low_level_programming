#include "main.h"

/**
 *binary_to_uint - Function that converts a binary number to an unsigned int.
 *Prototype: unsigned int binary_to_uint(const char *b);
 *@b: is pointing to a string of 0 and 1 chars
 *Return: the converted number, or 0 if
 *-> there is one or more chars in the string b that is not 0 or 1
 *-> b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
        int i;

        int length = strlen(b);

        unsigned int result = 0;

        for (i = 0; i < length; i++)
        {
                if (b[i] != '1' && b[i] != '0')
                {
                        return (0);
                }
                else if (b[i] == '1')
                {
                        result += pow(2, length - 1 - i);
                }
        }

        return result;
}
