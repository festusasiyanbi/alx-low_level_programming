#include "main.h"
/**
 * main - This program prints all alphabts in lower cases
 *
 * Return: It returns 0 if no error is met
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
return (0);
}
