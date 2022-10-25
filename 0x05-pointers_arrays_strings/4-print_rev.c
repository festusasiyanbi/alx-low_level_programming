#include "main.h"
/**
 * print_rev - Prints strings in reverse
 * @s: string to be reversed
 * Return: void
 */

void print_rev(char *s)
{
int k = 0;
while (k >= 0)
{
if (s[k] == '\0')
break;
k++;
}
for (k--; k >= 0; k--)
_putchar(s[k]);
_putchar('\n');
}
