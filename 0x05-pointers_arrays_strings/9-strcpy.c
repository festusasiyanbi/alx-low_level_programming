#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies string src into dest which is the buffer point
 * @dest: destination
 * @src: the source
 * Return: returns the pointer dest
 */

char *_strcpy(char *dest, char *src)
{
int k = 0;
while (k >= 0)
{
(dest + k) = (src + k);
if (*(src + k) == '\0')
{
break;
k++;
}
}
return (dest);
}
