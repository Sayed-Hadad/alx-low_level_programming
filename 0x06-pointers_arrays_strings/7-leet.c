#include "main.h"

/**
 *leet -  a function that encodes a string into 1337:
 *@s : input
 *Return: s
 */

char *leet(char *s)
{
	char *e = s;
	char chars[] = { 'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L' };

	char nums[] = { 4, 3, 0, 7, 1, 4, 3, 0, 7, 1 };

	int i = 0;

	while (*s)
	{
		for (i = 0; i < 10; i++)
		{
			if (*s == chars[i])
				*
				s = nums[i] + '0';
		}

		s++;
	}

	return (e);
}
