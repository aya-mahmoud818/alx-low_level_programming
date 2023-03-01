#include "main.h"
/**
 * _strcmp -entery
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int dif = 0;

	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			dif = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (dif);
}
