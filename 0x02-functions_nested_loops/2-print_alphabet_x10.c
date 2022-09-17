#include "main.h"

/**
 * print_alphabet_x10 - function  that prints 10 times the alphabeth
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	(char c);

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(10 * c);
	}

	_putchar('\n');
}

