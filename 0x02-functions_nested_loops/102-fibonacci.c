#include <stdio.h>
#include "main.h"
/**
 * main - prints the first 50 fibonacci numbers ", " separated
 * Return: Return: 0 on success and the stated print on stdout
 */
int main(void)
{
	int i;
	long f1;
	long f2;
	long fn = f1;
	for (i = 0; i < 50; i++)
	{
		printf("%1d", fn);
		if (i < 49)
			printf(", ");
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
	}
	printf("\n");
	return (0);
}




