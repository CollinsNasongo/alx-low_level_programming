#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints struct dog
 *
 * @d: the struct d
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name);
	printf("Age: %1f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
