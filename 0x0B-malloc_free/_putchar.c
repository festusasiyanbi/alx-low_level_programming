#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints character c to standard output
 * @c: the character we want to print using putchar
 * Return: returns 1 on success otherwise -1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
