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
        loop = current->next;
        while (loop->prev != NULL)
        {
            pos = loop->prev;
            swap = loop;
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
                print_list(*list);
            }
            loop = loop->prev;
        }
        current = current->next;
    }
}