i#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)
{
	puts("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	puts("Size of a int: %lu byte(s)\n",(unsigned long)sizeof(int));
	puts("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	puts("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	puts("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
