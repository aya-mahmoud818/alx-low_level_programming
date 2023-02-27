#include "main.h"
/**
 * rev_string -entery
 *
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int left = 0;
	char temp;
	int right;

	while (s[length])
	{
		length++;
	}
	while (left <= length / 2)
	{
		right = length - 1 - left;
		temp = s[right];
		s[right] = s[left];
		s[left] = temp;
		left++;
	}
}
