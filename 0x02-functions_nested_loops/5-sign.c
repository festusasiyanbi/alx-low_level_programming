#include "main.h"
/**
 * print_sign - Checks for signs in the program
 * @n: this character checks whether the program is +, - or 0
 *
 * Return: This returns + is n>1, - if n<1, 0 if n is 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
