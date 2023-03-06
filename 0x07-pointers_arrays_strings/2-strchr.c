#include "main.h"
/**
 * *_strchr -entery
 *
 * @s: string
 * @c: char
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}

	return (0);
}
