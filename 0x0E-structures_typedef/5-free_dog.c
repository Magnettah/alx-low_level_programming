#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees the memory alloacted for struct dog
 * @d: struct dog that is to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
