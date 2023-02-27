#include <stdio.h>

/**
 * _strlen - Returns the length of the string
 * @str: The string length to be gotten
 * Return: The length of @str
 */

size_t_strlen(const char *str)

{
	size length = 0;

	while (*str++)
	length++;
	return (length);
}
