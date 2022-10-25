#include "main.h"
/**
 * puts_half - prints half of a string
 * @str - The string input
 * Return: void
 */

void puts_half(char *str)
{
int k = 0, i;
while (k >= 0)
{
if (str[k] == 0)
break;
k++;
}
if (k % 2 == 1)
i = k / 2;
else 
i = (k - 1) / 2;
for (i++; i < k; i++)
_putchar(str[i]);
_putchar('\n');
}
