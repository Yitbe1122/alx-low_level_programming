#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees a dog strut
 * @d:  struct dog to be initialized
 *
 */

void free_dog(struct dog *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
