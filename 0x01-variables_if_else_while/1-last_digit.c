#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, L;

	srand=(0));
	n = rand () - RAND_MAX /2;

	 L = n % 10;
	 if (L>5)
	 {
		 printf("Last digit of %i is %i and  is greater than 5", n, L);
	 } 
	 else if (L==0)
	 {
		 printf("Last digit of %i is %i and is 0", n, L);
	 }
	 else if (0 < L < 6)
	 {
		 printf("Last digit of %i is %i and is less than 6 and not 0");
	 }
	 return (0);
}
