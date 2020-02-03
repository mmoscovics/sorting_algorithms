#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list in
 * ascending order using the insertion sort algorithm
 * @list: head of doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *loop, *pos, *swap;

	if (list == NULL || *list == NULL)
		return;
	current = (*list)->next;
	while (current != NULL)
	{
		loop = current;
		while (loop != NULL)
		{
			pos = loop;
			swap = current;
			if (pos->n > swap->n)
			{
				if (swap->next != NULL)
					swap->next->prev = pos;
				if (pos->prev != NULL)
					pos->prev->next = swap;
				swap->prev = pos->prev;
				pos->prev = swap;
				pos->next = swap->next;
				swap->next = pos;
				if (swap->prev == NULL)
					*list = swap;
				print_list(*list);
			}
			loop = loop->prev;
		}
		current = current->next;
	}
}
