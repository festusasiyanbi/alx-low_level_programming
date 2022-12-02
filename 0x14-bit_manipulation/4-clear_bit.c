#include "main.h"

/**
 * clear_bit - The  function that sets the value of a bit to 0 at a given index
 * @n: The pointer to the bit
 * @index: The index to set the value at zero based indexing
 * Return: If an error occurs, -1 otherwise 1 on success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
*n &= ~(1 << index);
return (1);
}
