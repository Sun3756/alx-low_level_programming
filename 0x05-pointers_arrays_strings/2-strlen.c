#include "main.h"
#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string
 * @s: string
 *
 * Return: output result
 */
int _strlen(char *s)
{
	int L = 0;

	while (*(s + L) != '\0')
		L++;

	return (L);
}

