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
 * bubble_sort - Function to sort array through bubble sort
 * @array: Array being sorted
 * @size: Size of array
 * Return: Organized array
 */
void bubble_sort(int *array, size_t size)
{
	size_t temp1;
	size_t temp2;
	int check;

	if (array == NULL || size == 0)
	{
		return;
	}
	if ((array) && (size > 2))
	{
		for (temp1 = 0; temp1 < (size - 1); temp1++)
		{
			for (temp2 = 0; temp2 < (size - temp1 - 1); temp2++)
			{
				if (array[temp2] > array[temp2 + 1])
				{
					swap(&array[temp2], &array[temp2 + 1]);
					print_array(array, size);
					check = 1;
				}
			}
			if (check == 0)
			{
				break;
			}
		}
	}
}
