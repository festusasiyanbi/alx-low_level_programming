#ifndef DOG_H
#define DOG_H
/**
 * struct dog - This programs runs for a dog
 * @age: The dog's age
 * @name: The dog's name
 * @owner: The owner 
 * Description: This program is to give details about the unknown dog yet
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
