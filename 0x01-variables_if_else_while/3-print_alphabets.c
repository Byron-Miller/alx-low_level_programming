#include <stdio.h>

/**
*main - print the alphabet in lowercase then in uppercase
*description: using the main function this program
*prints the alphabet in lowercase then in uppercase followed by newline
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

	c = 'A';

	while (c <= 'Z')
	{
	putchar(c);
	c++;
	}

	putchar('\n');
	return (0);
}
