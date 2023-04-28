#include "sort.h"

/**
 * swap - swaps two integers
 *
 * @a: first integer
 * @b: second integer
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 *				Bubble sort algorithm
 *
 * @array: The array to be sorted
 * @size: The size of the array
*/
void bubble_sort(int *array, size_t size)
{
	bool swapped = false;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	while (!swapped)
	{
		swapped = false;

		for (i = 0; i < (size - 1); i++)
		{
			for (j = 0; j < (size - 1); j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					print_array(array, size);
					swapped = true;
				}
			}
			if (!swapped)
				break;
		}
	}
}
