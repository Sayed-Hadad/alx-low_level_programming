#include "search_algos.h"

/**
 *binary_search - Searches for a value in a sorted array using binary search.
 *
 *@array: Pointer to the first element of the array.
 *@size: Number of elements in the array.
 *@value: Value to search for.
 *
 *Return: If the value is found, returns the index of the first occurrence
 *        of the value in the array. If the value is not found, returns -1.
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int i;

	while (low <= high)
	{
		int middle = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; ++i)
		{
			printf("%d", array[i]);
			if (i != high)
				printf(", ");
		}

		printf("\n");

		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			low = middle + 1;
		else
			high = middle - 1;
	}

	return (-1);
}
