#include <stdlib.h>
#include "dog.h"

/**
 *_strlen - Returns the length of a string
 *@s: String to count
 *Return: String length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 *_strcpy - Copy a string
 *@dest: Destination value
 *@src: Source value
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}

/**
 *new_dog - ...
 *@name: ...
 *@age: ...
 *@owner: ...
 *Return: ...
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t  *dogy;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}

	dogy = (dog_t *) malloc(sizeof(dog_t));
	if (dogy == NULL)
	{
		return (NULL);
	}

	dogy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogy->name == NULL)
	{
		free(dogy);
		return (NULL);
	}

	dogy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogy->owner == NULL)
	{
		free(dogy->name);
		free(dogy);
		return (NULL);
	}

	dogy->name = _strcpy(dogy->name, name);
	dogy->age = age;
	dogy->owner = _strcpy(dogy->owner, owner);
	return (dogy);
}
