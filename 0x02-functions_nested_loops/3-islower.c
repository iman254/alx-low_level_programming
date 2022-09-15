#include "main.h"
/**
 * _islower - checks if a character is lowercase.
 *
 * @c: THe character to be checked.
 *
 * return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
