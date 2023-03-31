#include "main.h"

/**
 *leet -  a function that encodes a string into 1337:
 *@s : input
 *Return: s
 */

char *leet(char *s)
{
	char *r = s;
	char chars[] = { 'a', 'e', 'o', 't', 'l' };

	char nums[] = { 4, 3, 0, 7, 1 };

	int i = 0;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == chars[i] || *s == nums[i] - 32)
				*
				s = nums[i] + '0';
		}

		s++;
	}

	return (r);
}
