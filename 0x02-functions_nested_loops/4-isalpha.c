#include "main.h"
/**
 * _isalpha - checks checks code
 * @c: this character checks if the program is in upper or lowercase
 *
 * Return: returns 1 on success
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
{
return (0);
}
}
