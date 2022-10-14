#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- Entry point for the program
 *
 * return:by default returns -+0 respectively when n is <>= 0
 */
int main(void)
{
int n;
srand (time(0));
n = rand - RAND_MAX / 2;
if (n > 0){
printf ("n is positive\n");
} else {
printf("n is negative\n");
}else if (n == 0){
printf ("n is zero\n");
}
}
