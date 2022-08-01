#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - get the length of a string
 *
 * @str: the string
 *
 * Return: pointer to the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copy a string to a given destination
 *
 * @dest: destination to copy string
 * @src: source of string
 *
 * Return: the destination of string
 */
char *_strcopy(char *dest, char *src)
{
	int idx;

	for (idx = 0; src[idx]; idx++)
	{
		dest[idx] = src[idx];
	}
	dest[idx] = '\0';

	return (dest);
}

/**
 * new_dog - A function to create a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL if function fails or pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *another_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	another_dog = malloc(sizeof(dog_t));

	if (another_dog == NULL)
		return (NULL);
	another_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (another_dog->name == NULL)
	{
		free(another_dog);
		return (NULL);
	}
	another_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (another_dog->owner == NULL)
	{
		free(another_dog->name);
		free(another_dog);
		return (NULL);
	}
	another_dog->name = _strcopy(another_dog->name, name);
	another_dog->age = age;
	another_dog->owner = _strcopy(another_dog->owner, owner);
	return (another_dog);
}
