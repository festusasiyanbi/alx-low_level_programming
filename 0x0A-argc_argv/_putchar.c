#include <unistd.h>
/**
 * _putchar - prints character
 * @c: the character
 * Return: on success, 1, otherwise -1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
