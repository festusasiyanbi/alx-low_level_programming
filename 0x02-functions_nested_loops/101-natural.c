#include <stdio.h>
/**
 * main - This program prints multiples of 3 & 5 from 0 to 1024
 *
 * Return: always 0 on success
 */
int main(void)
{
int a, b;
for (a = 1; a <= 1024; a++)
{
if ((a % 3) == 0 || (a % 5) == 0)
b += a;
}
printf("%d\n", b);
return (0);
}
