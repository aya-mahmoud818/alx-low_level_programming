#include "main.h"

/**
 *  _islower - checks for lowercase charachters
 *
 * @c: parameter to be checked
 *
 * Return: always 0
 */
int _islower(int c)
	{
		if ((c >= 97) && (c <= 122))
		{
			return (1);
		}
		else
		{
			_putchar(0);
		}
		return (0);
	}
