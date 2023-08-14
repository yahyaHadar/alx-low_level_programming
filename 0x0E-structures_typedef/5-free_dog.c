#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memmory allocated for a struct dog
 *
 * @d: struct dog to go free
 *
 * Return: void.
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
