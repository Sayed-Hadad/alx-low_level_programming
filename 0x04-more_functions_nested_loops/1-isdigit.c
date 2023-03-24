#include "main.h"

/**
 *_isdigit - check is the input is digit or not
 *
 *@c: the input
 * if the input is digit
 * Return: 1 if c is a digit, 0 if is not
 */
int _isdigit(int c)
{
	if (c > 47 && c < 97)
	{
		return (1);
	}
	else
		return (0);
}
