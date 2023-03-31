#include "main.h"
#include <stdio.h>

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
