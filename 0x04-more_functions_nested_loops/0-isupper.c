#include "main.h"
/**
 * _isupper - checks if character c is an uppercase
 * @c: Variable text
 * Return: Always 0 on success
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
