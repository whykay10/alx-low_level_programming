#include "main.h"
#include <stdio.h>

/**
 * print_sign - fumction that prints signs
 *
 * @n: function parameter
 * printf: prints the argumentin the function
 * Return: 1,0 and -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+, ");
		return (1);
	}
	else if (n == 0)
	{
		printf("0, ");
		return (0);
	}
	else
	{
		printf("-, ");
		return (-1);
	}
}
