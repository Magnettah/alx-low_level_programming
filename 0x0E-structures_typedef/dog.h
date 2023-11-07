#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog structure
 * @name: The name of a dog
 * @age: The age of a dog
 * @owner: The owner of a dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog (used to define a new type for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
