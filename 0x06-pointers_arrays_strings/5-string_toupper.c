#include "main.h"
/**
 * *string_toupper -entery
 *
 * @s: string
 *
 * Return: 0
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] - = 32;
		}
		i++;
	}
	return (0);
}

