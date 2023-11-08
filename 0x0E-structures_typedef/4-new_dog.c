#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - duplicates string
 * @str: the steing to be duplicated
 * Return: pointer to the dup or NULL if it fails
 */
char *_strdup(char *str)
{
	char *dup;
	int i, length = 0;

	if (str == NULL)
		return (NULL);
	while (str[length])
		length++;

	dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		dup[i] = str[i];

	dup[i] = '\0';
	return (dup);
}

/**
 * new_dog - A function that creates new dog
 * @name: The name of the new dog
 * @age: The age of the new dog
 * @owner:The owner of the new dog
 *
 * Return: Pointer to the new dog or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}

