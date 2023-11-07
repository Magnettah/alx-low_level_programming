#include "dog.h"
#include <stddef.h>

/**
 * init_dog - used to initialize a dog variable
 * @d: pointer to dog
 * @name: name of a dog
 * @age: The age of a dog
 * @owner: owner of a dog
 *
 * Return: Nothing.
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
