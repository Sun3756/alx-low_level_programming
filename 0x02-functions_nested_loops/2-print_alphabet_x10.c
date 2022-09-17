#include "main.h"

/**
 * print_alphabet_x10 - function  that prints 10 times the alphabeth
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int c, i;

	i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		i++;
		_putchar('\n');
	}
}

