#include <stdio.h>

/**
*main - print the alphabet in lower case except q and e
*description: using the main function this program
*prints the alphabet in lowercase except q and e
*Return: 0
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	if (c != 'e' && c != 'q')
	{
	putchar(c);
	}
	c++;
	}

	putchar('\n');
	return (0);
}
