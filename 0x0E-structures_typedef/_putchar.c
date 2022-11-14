#include <stdio.h>
#include <stdlib.h>
/**
 * _putchar - writes a character to stdout
 * @c: the character
 * Return: returns 1 on success otherwise -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
