#include "main.h"

/**
 *  _strlen - returns the length of the string.
 *  Return: Length of string
 *  @s: input
 */

int _strlen(char *s)
{
	int length = 0;
	
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
