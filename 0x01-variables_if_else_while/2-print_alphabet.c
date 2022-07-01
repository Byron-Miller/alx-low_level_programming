#include <stdio.h>
#include <stdlib.h>

/**
*main - print the alphabet letters in lowercase
*
*description: using the main function this program prints the
*alphabetical letters in lowercase
*Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')

	{
	putchar(c);
	c++;
	}

	putchar('\n');
	return (0);
}
