#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked -entery
 *
 * @b: size of memory
 *
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	int s;

	*s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	else
	{
		return (s);
	}
}
