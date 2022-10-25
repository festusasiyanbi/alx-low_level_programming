#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
int p = *a;
*a = *b;
*b = p;
}
