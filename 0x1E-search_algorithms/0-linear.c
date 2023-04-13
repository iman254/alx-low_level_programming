#include "search_algos.h"
/**
* linear_search - a function meant to linear search
* @array: a pointer to the first element
* @size: size of the array
* @value: the value to  be searched
* Return: -1 upon failure
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
