#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog structure
 * @name: nameof a dog
 * @age: the age of a dog
 * @owner: name of the owner of a dog
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
