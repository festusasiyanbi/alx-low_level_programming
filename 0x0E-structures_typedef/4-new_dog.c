#include "dog.h"
#include <stdlib.h>

int *_strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string
 * @str: The string to be measured
 * Return: The length of the string
 */

int *_strlen(char *str)
{
int len = 0;
while (*str++)
len++;
return (len);
}

/**
 * _strcpy - copines a string pointed to by src to the one pointed to by dest
 * @src: The source we are copying from
 * @dest: The destination we are copying to
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int index = 0;
for (index = 0; src[index]; index++)
dest[index] = src[index];
dest[index] = '\0';
return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @Oowner: The owner of the dog
 * Return: Returns the new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggo;
if (name == NULL || age < 0 || owner == NULL)
return (NULL);
doggo = malloc(sizeof(dog_t));
if (doggo == NULL)
return (NULL);
doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (doggo->name == NULL)
{
free(doggo);
return (NULL);
}
doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (doggo->owner == NULL)
{
free(doggo->name);
free(doggo);
return (NULL);
}
doggo->name = _strcpy(doggo->name, name);
doggo->age = age;
doggo->owner = _strcpy(doggo->owner, owner);
return (doggo);
}
