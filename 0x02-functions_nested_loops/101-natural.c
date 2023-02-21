#include <stdio.h>

/**
 * main - function prints alphabets
 *
 * description: prints alphabets from a-z
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 5 == 0 || n % 3 == 0)
		{
			sum = sum + n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
