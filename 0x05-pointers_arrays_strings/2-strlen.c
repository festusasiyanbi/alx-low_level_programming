#include "main.h"
/**
 * _strlen - Finds the length of the program
 * @s: The variable test
 * Return: The length of the string
 */

int _strlen(char *s)
{
int p = 0;
while (*(s + p) != 0)
{
p++;
}
return (p);
}
