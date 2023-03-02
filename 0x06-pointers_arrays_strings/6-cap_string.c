#include "main.h"
/**
 * *cap_string -entery
 *
 * @s: string
 *
 * Return: char
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		if ((s[i] == ' ' || s[i] == '	' || s[i] == '\n' ||
				s[i] == ',' || s[i] == ';' || s[i] == '.' ||
				s[i] == '!' || s[i] == '?' || s[i] == '"' ||
				s[i] == '(' || s[i] == ')' ||
				s[i] == '{' || s[i] == '}') && s[i] >= 97 && s[i] <= 122)
		{
			s[i + 1] -= 32;
			i++;
		}
	}
	return (s);
}
