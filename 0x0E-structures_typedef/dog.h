#ifndef _DOG_
#define _DOG_

/**
 * struct dog - the dog structure
 * @name: the name of the dog
 * @age:  the age of the dog
 * @owner: the owner of the dog
 *
 * Return: NULL
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *dup_strint(char *s);
void free_dog(dog_t *d);


#endif
