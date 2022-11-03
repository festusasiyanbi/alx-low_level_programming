#include "main.h"
/**
 * _strpbrk - locates the first occurrence in s of any of the bytes in accept
 * @s: the string we look for occurence in
 * @accept: the print we compare against
 * Return: a pointer to the byte or null
 */

char *_strpbrk(char *s, char *accept)
{
char c, *p;
for (c = *s; c != 0; s++, c = *s)
{
for (p = accept; *p != 0; p++)
{
if (c == *p)
{
return (s);
}
}
}
return (0);
}
