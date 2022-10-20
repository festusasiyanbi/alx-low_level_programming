#include <stdio.h>
/**
 * main - this programs returns fibonacci numbers
 *
 * Return: returns zero if no error is met
 */
int main(void)
{
int c;
long int n1, n2, function;
n1 = 1;
n2 = 2;
printf("%ld, %ld", n1, n2);
for (c = 0; c < 48; c++)
{
function = n1 + n2;
printf(", %ld", function);
n1 = n2;
n2 = function;
}
printf("\n");
return (0);
}
