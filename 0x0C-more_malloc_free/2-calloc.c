#include "main.h"
#include <stdlib.h>
/**
 * *_calloc -entery
 *
 * @nmemb: array elements
 * @size: size of each element
 *
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(size * nmemb);
	if (array == NULL)
	{
		return (NULL);
	}

	filler = array;

	for (i = 0; i < (size * nmemb); i++)
	{
		filler[i] = '\0';
	}
	return (array);
}
