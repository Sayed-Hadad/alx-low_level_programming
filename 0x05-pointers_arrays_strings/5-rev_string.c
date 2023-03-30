#include "main.h"

/**
 *rev_string - function to rev string
 *@s: the input
 */
void rev_string(char *s)
{
	char temp;
	int i, counter = 0, end = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	end = counter - 1;

	for (i = 0; i < counter / 2; i++)
	{
		temp = s[i];
		s[i] = s[end];
		s[end--] = temp;
	}
}
