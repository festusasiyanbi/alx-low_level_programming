#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: The pointer to the bit
 * @index: The index to set the value at - zero based indexing
 * Return: returns 1 otherwise -1 if error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
*n ^= (1 << index);
return (1);
}
