#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a dog structure
 * @d: A dog structure
 * @name: Name of the dog
 * @age: Age of the the dog
 * @owner: The owner of the dog
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
