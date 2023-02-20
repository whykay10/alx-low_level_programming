#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (long unsigned int)sizeof(char));
	printf("Size of a int: %lu byte(s)\n",(long unsigned int)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (long unsigned int)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (long unsigned int)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (long unsigned int)sizeof(float));
	return (0);
}
