#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initit a var of type struct dog
* @d: ptr to struct dog to initialize
* @name: name to initit
* @age: age to initit
* @owner: owner to initialit
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
