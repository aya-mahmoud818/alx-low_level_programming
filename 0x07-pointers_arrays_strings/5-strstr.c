#include "main.h"
/**
 * *_strstr -entery
 *
 * @haystack: string
 * @needle: string
 *
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, start;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			start = i;
			for (j = 0; needle[j] == '\0' || haystack[i] == needle [j]; j++)
			{
				if (needle[j] == '\0')
				{
					return (haystack + start);
				}
				i++;
			}
		}
	}
	return (0);
}

