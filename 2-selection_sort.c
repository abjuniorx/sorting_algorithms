#include "sort.h"

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t b, i, n;
	int temp;

	if (!array || !size)
		return;
	for (b = 0; b < size - 1; b++)
	{
		for (i = size - 1, n = b + 1; i > b; i--)
		{
			if (array[i] < array[n])
			{
				n = i;
			}
		}
		if (array[b] > array[n])
		{
			temp = array[b];
			array[b] = array[n];
			array[n] = temp;
			print_array(array, size);
		}
	}
}
