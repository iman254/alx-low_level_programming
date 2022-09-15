#include "main.h"
/**
 * main - prints 10 times the alphabet, in lowercase, followed by a new line
 *
 * return: Always 0
 */
int main(void)
{
	int count = 0
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n')
	}
}


