#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list in
 * ascending order using the insertion sort algorithm
 * @list: head of doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
    listint_t *current = *list, *loop, *pos, *swap;

    if (current == NULL || current->next->next == NULL)
        return;
    while (current->next != NULL)
    {
        loop = current;
        while (loop != NULL && pos->n > swap->n)
        {
            pos = loop;
            swap = loop->next;
            if (pos->n > swap->n)
            {
                swap->next->prev = pos;
                swap->prev = pos->prev;
                pos->prev->next = swap;
                pos->prev = swap;
                pos->next = swap->next;
                swap->next = pos;
                print_list(list);
            }
            loop = loop->prev;
        }
        current = current->next
    }
}