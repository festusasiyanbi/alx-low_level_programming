#include "main.h"
/**
 * puts - prints one char out of 2 strings
 * @str: input string
 * Return: void
 */

void puts2(char *str)
{
int k = 0;
while (k >= 0)
{
if (str [k] == '\0')
{
_putchar('\n');
break;
}
if (count % 2 == 0)
_putchar(str[k]);
k++;
}
}
