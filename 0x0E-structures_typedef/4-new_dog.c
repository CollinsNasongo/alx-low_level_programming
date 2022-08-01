#include "dog.h"

/**
 * new_dog - A function to create a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL if function fails or pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *ower)
{
	dog_t *another_dog;

	another_dog = malloc(sizeof(dog_t));
	if (another_dog == NULL)
		return (NULL);
	another_dog->name = name;
	another_dog->age = age;
	another_dog->owner = ower;
	
	return (another_dog);
}
