#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes used from the source
 * Return: the pointer to the destination
 */

char *_strncat(char *dest, char *src, int n)
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
