#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - print the alphabet in lower case in reverse
*description: using the main function this program prints letters in reverse
*Return: 0
*/
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
	putchar(c);
	c--;
	}

	putchar('\n');
	return (0);
}
