#include "sort.h"


/**
 * swap - function swap to values
 * @a: pointer to the first value
 * @b: pointer to the second value
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - Simplest Sorting alghorithm
 * @array: pointer to unordered array
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size < 2)
		return;
	
	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[i])
			{
				swap(&array[i], &array[j]);
			}
		}
		print_array(array, size);
	}
}
