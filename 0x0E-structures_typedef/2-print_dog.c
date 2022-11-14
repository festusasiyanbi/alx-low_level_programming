#include "dog.h"
#include <stdlib.h>

/*
 * print-dog - The program that prints a struct dog
 * @d: The struct dog to be printed
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
printf("Name: (Nil)\n");
else
printf("My name is %s\n", d->name);
if (d->age == NULL)
printf("Age: (Nil)\n");
else
printf("I am %f\n years old", d->age);
if (d->owner == NULL)
printf("Owner: (Nil)\n");
else
printf("My boss is %s\n", d->owner);
}
