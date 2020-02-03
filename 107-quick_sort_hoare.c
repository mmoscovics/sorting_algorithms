#include "sort.h"

/**
 * quick_sort_hoare - Function that sorts an array of integers
 * in ascending order
 * using the Quicksort algorithm.
 * @array: array of integers
 * @size: size of array
 */

void quick_sort_hoare(int *array, size_t size)
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
		size_t par = hoare_partition(array, size, low, high);

		q_sort(array, size, low, par - 1);
		q_sort(array, size, par, high);
	}
}

/**
 * hoare_partition - Quicksort partition function places pivot element,
 * and swaps low to left and high to right of the pivot
 * @array: array of integers
 * @size: size of array
 * @low: starting index
 * @high: ending index
 * Return: pivot point
 */

size_t hoare_partition(int *array, size_t size, size_t low, size_t high)
{
	int pivot = array[high];
	size_t i = low - 1, j = high + 1;

	while (1)
	{
		do {
			i++;
		} while (array[i] < pivot);
		do {
			j--;
		} while (array[j] > pivot);
		if (i >= j)
			return (i);
		q_swap(&array[i], &array[j], array, size);
	}

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
