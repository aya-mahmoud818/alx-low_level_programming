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
	int prev = 1;
	int prev2 = 2;
	int temp;

	printf("%d, ", 1);
	printf("%d, ", 2);
	for (n = 3; n <= 50; n++)
	{
		temp = prev;
		prev = prev2;
		prev2 = temp + prev2;
		if (n == 50)
		{
			printf("%d\n", prev2);
		} else
		{
			printf("%d, ", prev2);
		}
	}
	return (0);

}
