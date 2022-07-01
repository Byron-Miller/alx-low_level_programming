#include <stdio.h>
#include <unistd.h>

/**
*main - prints the string in write function
*Description: using the main function this program prints
*the string "and that piece of art is useful"
*"- Dora Korpar, 2021-08-26",followed by a new line,
*to the standard error.
*Return: 1
*/
int main(void)
{
	write(2, "and that piece of art is useful\- Dora Korpar,
	2015-10-19\n", 59);
	return (1);
}

