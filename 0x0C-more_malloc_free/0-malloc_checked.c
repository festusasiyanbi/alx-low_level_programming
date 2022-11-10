#include "main.h"
/**
 * malloc_checked - prints a string
 * @b: number of memery bytes
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
