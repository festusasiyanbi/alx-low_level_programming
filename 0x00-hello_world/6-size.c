#include<stdio.h>
/**
 * main- serves as entry point for the program
 *
 * return:by default returns '0'if no errors otherwise returns non-zero value
 */
int main(void)
{
//sizeof evaluates the size of a variable
printf("size of int: %d bytes\n", sizeof(int));
printf("size of float: %d bytes\n", sizeof(float));
printf("size of char: %d bytes\n", sizeof(char));
printf("size of double: %d bytes\n", sizeof(double));

return (0);
}
