#include <stdio.h>
#include "main.h"
/**
 * main - the function that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
(void) argv;
printf("%i\n", argc - 1);
}
