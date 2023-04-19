#ifndef _HEADER_
#define _HEADER_

/**
 *struct dog_t - new datatype of struct dog.
 *@name: The name of the dog.
 *@age: The age of the dog.
 *@owner: The owner of the dog.
 *
 *Description: The attributes of a dog.
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
}

dog_t;

/**
 *struct dog - Dog attributes
 *struct dog_t - new datatype of struct dog.
 *@name: The name of the dog.
 *@age: The age of the dog.
 *@owner: The owner of the dog.
 *
 *Description: The attributes of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
