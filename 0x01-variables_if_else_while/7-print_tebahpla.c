#include <stdio.h>
/**
 * main - Prints the lower case alphabet in reverse.
 *
 * return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}

