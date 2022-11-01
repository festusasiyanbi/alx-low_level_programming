#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory area pointed
 *  to by s with the constant byte b
 *  @s: a pointer to the memory area to be filled
 *  @c: the charater that fills the memory
 *  @n: number of bytes to be filled
 *  Return: Returns a pointer to the memory area s
 */

char *_memset(void *s, int c, size_t n)
{
unsigned int index;
unsigned char *memory = s, value = c;
for (index = 0; index < n; index++)
memory[index] = value;

return (memory);

}
