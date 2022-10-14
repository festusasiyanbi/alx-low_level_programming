#include<stdio.h>
/**
 * main- serves as entry point for the program
 *
 * return:by default returns '0'if no errors otherwise returns non-zero value
 */
int main(void)
int typeInt;
float typeFloat;
char typeChar;
double typeDouble;
{
//sizeof evaluates the size of a variable
printf("size of int: %d bytes\n" sizeof(typeInt));
printf("size of float: %d bytes\n" sizeof(typeFloat));
printf("size of char: %d bytes\n" sizeof(typeChar));
printf("size of double: %d bytes\n" sizeof(typeDouble));

return (0);
}
