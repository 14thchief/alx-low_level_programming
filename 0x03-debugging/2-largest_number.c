#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: thirs integer
 * Return: largst number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		larges = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (c > b && c > a)
	{
		largest = c
	}
	else
	{
		largest = b;
	}

	return (largest);
}
