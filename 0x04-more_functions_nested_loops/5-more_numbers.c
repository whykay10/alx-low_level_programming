#include "main.h"
/**
 * more_numbers - prints the numbers
 *
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
			_putchar("%d", j);
	}
	_putchar("\n");
	_putchar(i);
}
