#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory area pointed
 *  to by s with the constant byte b
 *  @s: a pointer to the memory area to be filled
 *  @c: the charater that fills the memory
 *  @b: bytes
 *  @n: number of bytes to be filled
 *  Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n-- > 0)
*ptr++ = b;
return (s);
}
