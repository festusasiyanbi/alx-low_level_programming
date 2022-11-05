#include "main.h"
/**
 * _isdigit - checks if the parameter is a number between 0 & 9
 * @c: the input character
 * Return: returns 1 if parameter is a number(0 through) otherwise returns 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
