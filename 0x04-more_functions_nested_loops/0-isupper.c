#include "main.h"
/**
 * _isupper - checks if the parameters are in upper cases
 * @c: Variable text
 * Return: Always 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'z')
{
return (1);
}
else
{
return(0);
}
}
