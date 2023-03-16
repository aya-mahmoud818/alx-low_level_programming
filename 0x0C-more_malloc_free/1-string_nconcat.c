#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat -entery
 *
 * @s1: first string
 * @s2: second string
 * @n: numbber of second string
 *
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	unsigned int x = 0;
	int j = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	s3 = malloc(sizeof(char) * (i + n + 1));
	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		s3[j] = s1[i];
		j++;
	}

	while (s2[x] && x < n)
	{
		s3[j] = s2[x];
		x++;
		j++;
	}

	s3[j] = '\0';
	return (s3);
}
