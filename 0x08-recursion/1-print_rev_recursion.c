#include "main.h"
/**
 * _puts_recursion - this function prints a string in reverse
 * @s: the string input
 * Return: void
 */

void _puts_recursion(char *s)
{
if (s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
