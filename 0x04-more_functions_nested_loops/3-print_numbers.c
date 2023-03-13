#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that prints all numbers from
 * 0 to 9
 *
 * Return: returns nothing
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar(10);
}

