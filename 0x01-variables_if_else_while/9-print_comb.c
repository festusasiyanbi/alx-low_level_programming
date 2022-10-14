#include <stdio.h>
/**
 * main - Entry for the program
 *
 * Return: Always return 0
 */
int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar(i);
if (i == 9)
{
break;
}
else 
{
putchar (',');
putchar('');
}
}
putchar('\n');
return (0);
}
