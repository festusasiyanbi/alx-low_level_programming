#include "main.h"
/**
 * _puts - Prints a string
 * @str: the input string
 * Return: void
 */

void _puts(char *str)
{
int k = 0;
while (k >= 0)
{
if (str[k] == '\0')
{
_putchar('\n');
break;
}
_putchar(str[k]);
k++;
}
}
