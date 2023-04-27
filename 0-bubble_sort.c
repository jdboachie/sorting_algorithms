#include "sort.h"

/**
 * swap - swaps two integers
 * 
 * @a: first integer
 * @b: second integer
*/
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * 				Bubble sort algorithm
 * 
 * @array: The array to be sorted
 * @size: The size of the array
*/
void bubble_sort(int *array, size_t size)
{
	/*
	PSEUDOCODE
	==========

	procedure bubble_sort(array)
		n = length(array)
		repeat
			swapped = false
			for i = 1 to n - 1
				if array[i - 1] > array[i]
					swap(array[i - 1], array[i])
					swapped = true
				end if
			end for
		until not swapped
	end procedure
	*/

	bool swapped = false;
	size_t i, j;

	while (!swapped)
	{
		swapped = false;

		for (i = 0; i <= size - 1; i++)
		{
			for (j = 0; j < size - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					print_array(array, size);
					swapped = true;
				}
			}
		}
	}	
}
