#include <stdio.h>

/**
 * main -entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch, CH;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (CH = 'a'; CH <= 'f'; CH++)
	{
		putchar(CH);
	}
	putchar('\n');

	return (0);
}
