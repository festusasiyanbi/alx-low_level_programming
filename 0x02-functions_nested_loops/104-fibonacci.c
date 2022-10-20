#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: always zero on success
 */
int main(void)
{
int c, boolean, boolean2;
long int a1, a2, b1, b2, c1, c2;

a1 = 1;
a2 = 2;
boolean = boolean2 = 1;
printf("%ld, %ld", a1, a2);
for (c = 0; c < 96; c++)
{
if (boolean)
{
b1 = a1 + a2;
printf(", %ld", b1);
a1 = a2;
a2 = b1;
}
else
{
if (boolean2)
{
c1 = a1 % 1000000000;
c2 = a2 % 1000000000;
a1 = a1 / 1000000000;
a2 = a2 / 1000000000;
boolean2 = 0;
}
b2 = (c1 + c2);
b1 = a1 + a2 + (b2 / 1000000000);
printf(", %ld", b1);
printf("%ld", b2 % 1000000000);
a1 = a2;
c1 = c2;
a2 = b1;
c2 = (b2 % 1000000000);
}
if (((a1 + a2) < 0) && boolean == 1)
boolean = 0;
}
printf("\n");
return (0);
}
