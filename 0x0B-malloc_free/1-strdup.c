#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - counts an array and returns its length
 * @s: array of elements
 * Return: returns unsigned int i
 */

int _strlen(char *s)
{
unsigned int i;
i = 0;
while (s[i] != '\0') /* counts character of string */
{
i++;
}
return (i);
}

/**
 * _strcpy - Return a pointer to an array
 * @src: source we are copying from
 * @dest: destination we are copying to
 * Return: returns destination
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

/**
 * _strdup - the program that prints a string
 * @str: the array of elements
 * Return: returns a pointer
 */

char *_strdup(char *str)
{
char *dest;
unsigned int size;
if (str == 0)
{
return (NULL);
}
size = strlen(str) + 1;
dest = (char *) malloc(sizeof(char) * size);
if (dest == 0)
{
return (NULL);
}
}
