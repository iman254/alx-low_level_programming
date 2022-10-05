#include "main.h"

/**
 * _islower - checks for lower case characters
 * Description: checks for lower cases
 * Return: 1 - lowercase 0 - otherwise
 * @c: input
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
