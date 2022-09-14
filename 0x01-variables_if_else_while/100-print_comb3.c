#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = 1; digit2 < 9; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 9 && digit2 == 9)
				continue;

			if (digit1 !== digit2)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}

