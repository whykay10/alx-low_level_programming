#include <stdio.h>

/**
 * _strlen - Returns the length of the string
 * @str: The string length to be gotten
 * Return: The length of @str
 */

int _strlen(const char *str)

{
	int length = 0;

	while (*str++)
	length++;
	return (length);
}
