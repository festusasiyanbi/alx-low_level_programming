#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: A pointer to the memory area to copy @src into
 * @src: The source buffer to copy characters from
 * @n: the number of bytes to copy from @src
 * Return: A pointer to destination buffer @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ptr = dest;
while (n-- > 0)
{
*dest = *src;
dest++;
src++;
}
return (ptr);
}
