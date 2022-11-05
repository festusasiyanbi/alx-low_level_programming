#include <stdio.h>
#include <stdlib.h>
/**
 * main - function of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
int position, change, aux, total;
int coins[] = {25, 10, 5, 2, 1}; /* Array integer */
position = change = aux = total = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
total = atoi(agrv[1]); /* convert string to integer */
if (total <= 0)
{
printf("0\n");
return (0);
}
while (coins[position] != '\0')
{
if (total >= coins[position])
{
aux = (total / coins[position]);
change += aux;
total -= coins[position] * aux;
}
position++;
}
printf("%d\n", change);
return (0);
}
