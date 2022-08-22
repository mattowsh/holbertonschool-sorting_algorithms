#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 * @list : the double linked list
 */

void insertion_sort_list(listint_t **list)
{
	int aux, aux2;
	listint_t *current, *nextnode, *prevnode;

	if (!list)
		return;

	currentnode = *list;
	
	while (current)
	{
		nextnode = current->next;
		prevnode = current->prev;

		if (nextnode != NULL && (current->n > nextnode->n))
		{
			current->next = nextnode->next;
			current->prev = nextnode;
			nextnode->next = current;
			nextnode->prev = prevnode;
			print_list(list);
			/* to reset pointers */
			currentnode = prevnode;
			nextnode = nextnode->next;
			current = prevnode->next;
		}
		if (prevnode != NULL && (current->n > prevnode->n))
		{

		}
	}
}
