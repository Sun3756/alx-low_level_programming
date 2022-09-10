#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;
	double d;
	printf("size of int: %ld byte(s)\n", sizeof(i));
	printf("size of a char: %ld byte(s)\n", sizeof(c));
	printf("size of long: %ld byte(s)\n", sizeof(li));
	printf("size of long long: %ld byte(s)\n", sizeof(lli));
	printf("size of float: %ld byte(s)\n", sizeof(f));
	printf("size of double: %ld byte(s)\n", sizeof(d));
	return (0);
}
