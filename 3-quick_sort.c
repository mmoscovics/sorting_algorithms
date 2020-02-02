#include "sort.h"

/**
 * quick_sort - Function that sorts an array of integers in ascending order
 * using the Quicksort algorithm.
 * @array: array of integers
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	q_sort(array, size, 0, size - 1);
}

/**
 * q_sort - Quicksort helper function
 * @array: array of integers
 * @size: size of array
 * @low: starting index
 * @high: ending index
 */

void q_sort(int *array, size_t size, size_t low, size_t high)
{
	if (low < high)
	{
		size_t par = q_partition(array, size, low, high);

		if (par > low + 1)
			q_sort(array, size, low, par - 1);
		if (par < high - 1)
			q_sort(array, size, par + 1, high);
	}
}

/**
 * q_partition - Quicksort partition function places pivot element,
 * and swaps low to left and high to right of the pivot
 * @array: array of integers
 * @size: size of array
 * @low: starting index
 * @high: ending index
 * Return: pivot point
 */

size_t q_partition(int *array, size_t size, size_t low, size_t high)
{
	int pivot = array[high];
	size_t i = low, j;

	for (j = low; j < high; j++)
		if (array[j] <= pivot)
		{
			q_swap(&array[i], &array[j], array, size);
			i++;
		}
	q_swap(&array[i], &array[high], array, size);
	return (i);
}

/**
 * q_swap - swaps and prints array
 * @a: first element
 * @b: second element
 * @array: array of integers
 * @size: size of array
 */

void q_swap(int *a, int *b, int *array, size_t size)
{
	int temp = *a;

	if (a != b)
	{
		*a = *b;
		*b = temp;
		print_array(array, size);
	}
}
