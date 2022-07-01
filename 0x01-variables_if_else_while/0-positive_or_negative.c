#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - print a random number using control strucutres
*
*description: using the main function this program gets a random
*number and prints the number if it is positive, negative, or zero
*Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%i is positive\n", n);
	else if (n < 0)
	printf("%i is negative\n", n);
	else
	printf("%i is zero\n", n);
	return (0);
}
