#include "main.h"
/**
 * *leet -entery
 *
 * @s: string
 *
 * Return: string
 */
char *leet(char *s)
{
	int i = 0;
	char letters = "aAeEoOtTlL";
	char numbers = "4433007711";

	while (s[i])
	{
		for (int j = 0; letters[j]; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] == numbers[j];
			}
		}
		i++;
	}
	return (s);
}
