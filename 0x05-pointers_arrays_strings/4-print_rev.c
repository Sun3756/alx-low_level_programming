#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string, in reverse, followed by
 * a new line.
 * @str: reverse order string
 *@s: string
 * Return: return nothing
 */
void print_rev(char *s)
{int len = strlen(s);

	while (len--)
		_putchar(*(s + len));
	_putchar(10)
}
