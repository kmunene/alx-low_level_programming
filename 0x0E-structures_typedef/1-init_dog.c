#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a var
 * @d: pointer to  dog  initialize
 * @name: name to initialize everything
 * @age: age to initia
 * @owner: owner to lize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

