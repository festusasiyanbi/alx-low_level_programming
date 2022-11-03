#include "main.h"
/**
 * wildcmp - compares 2 strings
 * @s1: first string
 * @s2: second string which can contain a* as a special character
 * Return: 1 if are identical, 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 != '\0' && *s2 == '*')
{
return (wildcmp(s1, s2 + 1));
}
return (*s2 == '\0');
}
if (*s2 == '*')
{
return (wildcmp(s1, s2 + 1) || wildcmp(s2, s1 + 1));
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
