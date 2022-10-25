#include "main.h"
/**
 * int_strlen - Finds the length of the program
 * @s: The variable test
 * Return: The length of the string
 */

int_strlen(char *s)
{
int p = 0;
/increment up to when the last character is NULL, \0/
while (*(s + p) != 0)
{
p++;
}
return (p);
}
