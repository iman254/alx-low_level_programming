#include "main.h"
/**
 * print_alphabet - Prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: void.
 */

void print_alphabet(void)
{
	char letter;
	for (letter = 'i'; letter <= 'z'; letter++)
		_putchar(letter);
		
	_putchar('\n');
}
