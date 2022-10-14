#include <stdio.h>
/**
 * main - Entry for the program
 *
 * Return: Always return 0 on success
 */
int main(void)
{
int i, k = '0', j;

for (i = '0'; i <= '9'; i++)
{
for (j = k; j <= '9'; j++)
{
if (i == j)
{
continue;
}
if (i =='8' && j =='9')
{
break;
}
else 
{
putchar(',');
putchar(' ');
}
}
k++;
}
putchar('\n');
return (0);
}
