#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void swap(int *first, int *second);
void q_sort(int *array, size_t size, size_t low, size_t high);
size_t q_partition(int *array, size_t size, size_t low, size_t high);
void q_swap(int *a, int *b, int *array, size_t size);
size_t hoare_partition(int *array, size_t size, size_t low, size_t high);
void split_merge(int *a, size_t left, size_t right, int *b);
void merge(int *a, size_t left, size_t mid, size_t right, int *b);
void copy_array(int *a, size_t size, int *b);

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif
