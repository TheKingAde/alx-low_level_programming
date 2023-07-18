#ifndef DOG_H
#define DOG_H
typedef struct dog Dog;

struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
