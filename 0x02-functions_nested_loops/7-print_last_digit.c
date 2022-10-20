#include "main.h"
/**
 * print_last_digit - The program prints last digit of integer a
 * @a: the character that computes the last digit of integer a
 *
 * Return: returns lastdigit on success
 */
int print_last_digit(int a)
{
int lastdigit;
lastdigit = a % 10;
if (lastdigit < 0)
{
lastdigit = lastdigit* (-1);
}
_putchar(lastdigit + '0');
return (lastdigit);
}
