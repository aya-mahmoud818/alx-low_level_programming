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
	int i;

	while (s[i])
	{
		if (s[i] == b)
		{
			return (*(s + i));
		}
		i++;
	}
	return (NULL);
}
