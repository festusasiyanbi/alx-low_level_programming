#include <stdio.h>
#include <stdlib.h>

struct dog
{
char *name;
float *age;
char *owner;
};

int main(void)
{
struct dog my_dog;
my_dog.name = "Harry";
my_dog.age = 1;
my_dog.owner = "Festus";

return (0);
}
