#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * check_num - the function checks for digit
 * @str: array string
 * Return: returns 0 on success
 */
int check_num(char *str)
{
unsigned int count;
count = 0;
while (count < strlen(str))
{
if (!isdigit(str[count]))
{
return (0);
}
count++
}
return (1);
}

/*8
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 on success
 */

int main(int argc, char *argv[])
{
int count;
int str_to_int;
int sum = 0;
count = 1;
while (count < argc)
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]);
sum += str_to_int;
}
else
{
printf("Error\n");
return (1)
}
count++;
}
printf("%d\n", sum);
return (0);
}
