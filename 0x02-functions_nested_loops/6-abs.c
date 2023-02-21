#include "main.h"

/**
 *  _abs - checks for lowercase charachters
 *
 * @c: parameter to be checked
 *
 * Return: always 0
 */
int _abs(int c)
	{
		if (c < 0)
		{
			return (c * -1);
		}
		else
		{
			return (c);
		}
	}
