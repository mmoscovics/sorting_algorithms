#include "sort.h"
/**
 * nswap - node swap helper
 * @list: List being printed
 * @first: First direction
 * @second: Second direction
 * @temp: helper
 * Return: Swapped nodes
 */
void nswap(listint_t **list, listint_t **first, listint_t **second, int *temp)
{
	(*first)->next = (*second)->next;
	(*second)->prev = (*first)->prev;

	if ((*second)->next)
		(*second)->next->prev = (*first);
	if ((*first)->prev)
		(*first)->prev->next = (*second);
	(*second)->next = (*first);
	(*first)->prev = (*second);
	if (*first == *list)
		*list = *second;

	print_list(*list);
	*temp = 1;
}
/**
 * cocktail_sort_list - Sorts doubly linked list of ints using Cocktail Shaker
 * @list: doubly linked list being sorted
 * Return: Sorted list
 */
void cocktail_sort_list(listint_t **list)
{
	if (!list || !(*list) || !((*list)->next))
		return;
	shakeitup(&(*list), *list, NULL, 1);
}
/**
 * shakeitup - recursive function for Cocktail Sort
 * @listy: List being sorted
 * @here: Current node in list
 * @end: Last sorted node in list
 * @parse: Parser moving back and forth in sort
 * Return: Sorted list
 */
void shakeitup(listint_t **listy, listint_t *here, listint_t *end, int parse)
{
	listint_t *nexty = NULL, *temp = NULL;
	int helper = 0;

	if (parse == 1)
	{
		do {
			if (here->n > here->next->n)
			{
				temp = here->next;
				nswap(&(*listy), &here, &temp, &helper);
			}
			else
				here = here->next;
		} while (here->next != end);
		if (helper)
			shakeitup(&(*listy), here->prev, nexty, -1);
	}
	else
	{
		while (here->prev != end)
		{
			if (here->n < here->prev->n)
			{
				temp = here->prev;
				nswap(&(*listy), &temp, &here, &helper);
			}
			else
				here = here->prev;
		}
		if (helper)
			shakeitup(&(*listy), here->next, nexty, 1);
	}
}
