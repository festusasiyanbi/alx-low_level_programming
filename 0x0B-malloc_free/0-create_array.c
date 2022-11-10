#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - the program creates an array
 * @size: size of the bytes
 * @c: the character
 * Return: a pointer to the array otherwise NULL
 */

char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int position;
if (size == 0)
{
return (NULL);
}
/* Defines values with malloc */
buffer = (char *) malloc(size * sizeof(c));
if (buffer == 0)
{
return (NULL);
}
else
{
position = 0;
while (position < size) /* While loop */
{
*(buffer + position) = c;
position++;
}
return (buffer);
}
