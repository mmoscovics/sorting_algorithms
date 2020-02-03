#include "sort.h"
/**
 * swap - Function to swap within sorting
 * @first: First element being checked
 * @second: Second element being checked
 * Return
 */
void swap(int *first, int *second)
{
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;
}
/**
 * selection_sort - Sort array of integers using Selection Sort algorithm
 * @array: Array being sorted
 * @size: Size of array being sorted
 * Return: Sorted array
 */
void selection_sort(int *array, size_t size)
{
	size_t first, second, minimum;

	if (array == NULL || size == 0)
	{
		return;
	}
	for (first = 0; first < size - 1; first++)
	{
		minimum = first;
		for (second = first + 1; second < size; second++)
		{
			if (array[second] < array[minimum])
			{
				minimum = second;
			}
		}
		if (minimum != first)
		{
			swap(&array[first], &array[minimum]);
			print_array(array, size);
		}
	}

}
