#include <stdio.h>
#include "dog.h"

/**
 * free_dog - freee the memory alloacted for struct dog
 * @d: struct dog that is to be freed
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
			}
}
