#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint -entery
 *
 * @b: pointer
 *
 * Return: value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i = 0;
	int base = 1;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		value = value + ((b[i] - 48) * base);
		base = base * 2;
	}
	return (value);
}
