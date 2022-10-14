#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- entry point for the program
 *
 * return: zero if no errors otherwise non-zero value
 */
int main(void)
{
int n;
int lastdigitof;
n = rand() - RAND_MAX / 2;
srand(time(0));
if (lastdigitof > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastdigitof);
}
else if (lastdigitof == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastdigitof);
}
else (lastdigitof < 6 && lastdigitof != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigitof);
}
return (0);
}
