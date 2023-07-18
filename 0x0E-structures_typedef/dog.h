#ifndef DOG_H
#define DOG_H
/*
 * typedef struct dog - holds some info
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: holds the name, age, and owner information of a dog.
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} Dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
