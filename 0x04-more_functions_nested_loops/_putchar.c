#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character 'c' to standard output
 * Return: returns 1 on success otherwise -1
 */
int _putchar(int c)
{
return (write(1, &c, 1));
}
