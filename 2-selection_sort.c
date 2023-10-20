#include "sort.h"

/**
 * swap - function swap two variable values
 * @a: pointer to the first value
 * @b: pointer to the second value
 */


void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - function sort arary using selection sort alghorithm
 * @array: pointer to unsorted array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (i != min)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
