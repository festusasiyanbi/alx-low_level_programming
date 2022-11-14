#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes struct dog
 * @d: The character for dog to be initialized
 * @name: The dog's name
 * @age: the dog's age
 * @owner: The dog's owner
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
