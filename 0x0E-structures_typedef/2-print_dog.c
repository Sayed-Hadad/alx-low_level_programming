#include <stdio.h>
#include "dog.h"

/**
 *print_dog - Print the dog information.
 *@d: dog struct.
 *Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner:%s\n", d->owner);
	}
}