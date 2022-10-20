#include "main.h"
/**
 * print_alphabet_x10 - prints aphabet in lowercases 10times
 *
 * Return: returns 1 on success
 */
void print_alphabet_x10(void)
{
char i, k;
for (k = 0; k < 10; k++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
