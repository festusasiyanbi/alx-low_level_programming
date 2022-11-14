#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/*
 * print_dog - Prints a struct dog
 * @d: The struct dog to be printed
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
printf("Name: (Nil)\n");
else
printf("Name: %s\n", d->name);
if (d->age < 0)
printf("Age: (Nil)\n");
else
printf("Age: %f\n", d->age);
if (d->owner == NULL)
printf("Owner: (Nil)\n");
else
printf("Owner: %s\n", d->owner);
}
