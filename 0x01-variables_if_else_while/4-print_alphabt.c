#include <stdio.h>
/**
 * main - Entry for the program
 *
 * Return: Alway zero on sucess
 */
int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
if (i =='e' || i == 'q')
continue;
putchar(i);
}
putchar('\n');
return (0);
}
