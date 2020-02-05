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
	int flag;

	if (size < 2)
		return;
	if ((array) && (size > 1))
	{
		for (temp1 = 0; temp1 < size; temp1++)
		{
			flag = 0;
			for (temp2 = 0; temp2 < (size - 1); temp2++)
			{
				if (array[temp2] > array[temp2 + 1])
				{
					swap(&array[temp2], &array[temp2 + 1]);
					print_array(array, size);
					flag = 1;
				}
			}
		}
		if (flag == 0)
			return;
	}
}
