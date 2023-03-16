#include "main.h"
#include <stdlib>
/**
 * *array_range -entery
 *
 * @min: starting int
 * @max: ending int
 *
 * Return: int
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int range = max - min

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * (range + 1));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= range; i++)
	{
		array[i] = min++;
	}
	return (array);
}
