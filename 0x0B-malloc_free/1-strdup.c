#include <stdlib.h>
#include "main.h"

/**
 * main - check the code for ALX School students.
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = _strdup("ALX SE");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strdup.c -o s

julien@ubuntu:~/0x0a. malloc, free$ ./s 

ALX SE

julien@ubuntu:~/0x0a. malloc, free$
