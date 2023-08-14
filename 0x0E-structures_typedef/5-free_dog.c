#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memmory allocated for a struct dog
 *
 * @d: struct dog to go free
*/

void free_dog(dog_t *d)
{
	if(d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
