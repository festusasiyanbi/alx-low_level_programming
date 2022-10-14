#include <stdio.h>
/**
 * main - Entry for the program
 *
 * Return: Returns zero on success
 */
int main(void)
{
char i;

for (i = 'z'; i = 'a'; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
