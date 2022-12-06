#include <unistd.h>

/**
 * _putchar - returns a character to stdout
 * @c: The character
 * Return: character c
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
