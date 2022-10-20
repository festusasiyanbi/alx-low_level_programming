#include "main.h"
/**
 * _abs - check for absolutevalue in the program
 * @a: character compute the absolutevalue of an integer
 *
 * Return: returns absolutevalue of the integer
 */
int _abs(int a)
{
int k = a;
int absolutevalue;
if (k < 0)
{
k = k* (-1);
}
absolutevalue = k;
return (absolutevalue);
}
