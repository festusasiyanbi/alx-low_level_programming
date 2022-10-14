#include <stdio.h>
/**
 * main - Entry for the program
 *
 * Return: Always return 0
 */
int main(void)
{
int num;

for (num = '0'; num <= '9'; num++)
{
putchar(num);
if (num == '9')
{
break;
}
else 
{
putchar (',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
