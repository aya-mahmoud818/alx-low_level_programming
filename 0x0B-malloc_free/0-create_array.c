#include "main.h"
#include <stdlib.h>
/**
 * *create_array -entery
 *
 * @size: int
 * @c: char
 *
 * Return: null if size=0, array if not
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arrays;

	if (size == 0)
	{
		return (NULL);
	}

	arrays = malloc(sizeof(char) * size);

	if (arrays == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arrays[i] = c;
	}
	return (arrays);
}
