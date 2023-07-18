#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - Entry
 * @name: name
 * @age: Age
 * @owner: owner
 *
 * Return: new_dogif sucess otherwise fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, name_length = 0;
	int owner_length = 0;
	dog_t *new_dog = NULL;

	while (name[name_length])
		name_length++;
	while (owner[owner_length])
		owner_length++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc((name_length + 1) * sizeof(char));
	new_dog->owner = malloc((owner_length + 1) * sizeof(char));
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= name_length; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i <= owner_length; i++)
		new_dog->owner[i] = owner[i];

	new_dog->age = age;
	return (new_dog);
}
