#include "sort.h"

/**
 * shell_sort - Function that sorts and array of integers in ascending order
 * using Shell sort algorithm, using the Knuth sequence.
 * @array: array of integers
 * @size: size of array
 */

void shell_sort(int *array, size_t size)
{
	size_t gap, idx, i;
	int temp, change = 0;

	if (array == NULL || size < 2)
		return;
	for (gap = 1; gap < size; gap = gap * 3 + 1)
		;
	while (gap > 0)
	{
		for (idx = gap; idx < size; idx++)
		{
			temp = array[idx];
			for (i = idx; i >= gap && array[i - gap] > temp; i -= gap)
			{
				array[i] = array[i - gap];
				change = 1;
			}
			array[i] = temp;
		}
		gap /= 3;
		if (change != 0)
			print_array(array, size);
	}
}
