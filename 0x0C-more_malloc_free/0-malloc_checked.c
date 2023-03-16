#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked -entery
 *
 * @b: unsigned int to bbe checked
 *
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	*b = sizeof(unsigned int);

	if (*b == NULL)
	{
		exit(98);
	}
	else
	{
		return (*b);
	}
}
