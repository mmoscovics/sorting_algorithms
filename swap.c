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
