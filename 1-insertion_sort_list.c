#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next, *prev;

	if (list == NULL || *list == NULL)
		return;

	current = *list;
	next = current->next;
	prev = current->prev;

	while (next != NULL)
	{
		if (current->n > next->n)
		{
			if (prev != NULL)
				prev->next = next;
			else
				*list = next;
			current->next = next->next;
			next->prev = prev;
			next->next = current;
			if (current->next != NULL)
				current->next->prev = current;
			prev = next;
			next = current->next;
			print_list(*list);
		}
		else
		{
			prev = current;
			current = next;
			next = next->next;
		}
	}
}
