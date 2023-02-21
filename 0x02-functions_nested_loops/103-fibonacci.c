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
	unsigned long prev = 1, prev2 = 2, sum = 0, temp;

	while (prev2 < 4000000)
	{
		temp = prev;
		prev = prev2;
		prev2 = temp + prev2;
		if (prev2 % 2 == 0)
		{
			sum = sum + prev2;
		}
	}
	printf("%lu\n", sum);
	return (0);

}
