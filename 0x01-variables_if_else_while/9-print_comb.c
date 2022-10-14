#include <stdio.h>
/**
 * main - Entry for the program
 *
 * Return: Return 0 on success
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
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
