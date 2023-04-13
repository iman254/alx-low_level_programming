#include "search_algos.h"

/**
* binary_search - afunction to enable binary search
* @array: the pointer to first element
* @value: value to be searched
* @size: THe size of array
* Return: -1 upon failure
*/

int binary_search(int *array, size_t size, int value)
{
	size_t right = size - 1;
	size_t left = 0;
	size_t i, mid;

	while (left <= right)
	{
		printf("search in array:");
		for (i = left; i < right; i++)
			printf(" %d", array[i]);
		printf(" %d\n", array[right]);

		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
