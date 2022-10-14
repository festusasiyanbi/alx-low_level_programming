#include<stdio.h>
/**
 * main- serves as entry point for the program
 *
 * return:by default returns '0'if no errors otherwise returns non-zero value
 */
int main(void)
{
printf("size of a char: %d bytes\n", sizeof(char));
printf("size of an int: %d bytes\n", sizeof(int));
printf("size of a long int: %d bytes\n", sizeof(long int));
printf("size of a long long int: %d bytes\n", sizeof(long long int));
printf("size of a float: %d bytes\n", sizeof(float));
return (0);
}
