#include <stdio.h>
#include <stdlib.h>

/**
*main - a program that prints combinations of single digits
*description: using the main function this program all single digit numbers
*Return: 0
*/
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
