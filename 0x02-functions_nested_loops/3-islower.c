#include "main.h"

/**
*main - _islower function
*
*description: to evaluate c
*Return: Get 1 if c is uppercase,
*get 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
