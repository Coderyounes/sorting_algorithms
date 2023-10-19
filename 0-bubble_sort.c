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
	int swapped;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0 ; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}
