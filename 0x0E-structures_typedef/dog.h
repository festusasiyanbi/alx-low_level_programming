#include <stdio.h>
#include <stdlib.h>

struct dog
{
char *name;
float age;
char *owner;
};

int main(void)
{
struct dog my_dog;
my_dog.name = "Harry";
my_dog.age = 3.5;
my_dog.owner = "Festus";

printf("My name is %s\n", my_dog.name);
printf("I am %d\n years old", my_dog.age);
printf("The name of my boss is %s\n", my_dog.owner);
return (0);
}
