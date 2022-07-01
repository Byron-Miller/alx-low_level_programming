#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - print all single digit numbers of base 10
*description: using the main function this program prints all single digit
*numbers of base 10 starting from 0 followed by a new line.
*Return: 0
*/
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
	putchar(c);
	c++;
	}

	putchar('\n');
	return (0);
}
