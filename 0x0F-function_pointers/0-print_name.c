#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - The function that  prints a name
 * @name: The name to be printed
 * @f: pointer to the printing function
 */

void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
return;
f(name);
}
