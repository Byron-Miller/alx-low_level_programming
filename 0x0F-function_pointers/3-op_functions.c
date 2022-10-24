/*
* File: 3-op_functions.c
*/

#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - Returns the sum of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The sum of a and b.
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Returns the difference of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The difference of a and b.
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Returns the product of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The product of a and b.
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Returns the division of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The quotient of a and b.
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - Returns the remainder of the division of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The remainder of the division of a by b.
*/
int op_mod(int a, int b)
{
	return (a % b);
}

function_pointers.h

#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/*
* File: function_pointers.h
* Desc: Header file containing prototypes for all functions
*       used in the 0x0E-function_pointers directory.
*/

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
