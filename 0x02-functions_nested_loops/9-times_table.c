#include "main.h"
/**
 * times_table - this program prints times_table from 0 to 9
 *
 * Return: no return (void)
 */
void times_table(void)
{
int a, b, operation;
for (a = 0; a <= 9; a++)
{
_putchar(48);
}
for (b = 0; b <= 9; b++)
operation = a * b;
_putchar(44);
_putchar(32);
if (operation <= 9)
_putchar(32);
_putchar(operation = 48);
}
else
{
_putchar((operation / 10) + 48);
_putchar((operation % 10) + 48);
}
}
_putchar('\n');
}
}
