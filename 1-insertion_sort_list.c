#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 * @list : the double linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL, *aux = NULL;

	if (!list || !(*list))
		return;

	current = *list;
	while (current)
	{
		aux = current->next;
		while (current->prev && (current->n < current->prev->n))
		{
			swapnodes(current, current->prev, list);
			print_list(*list);
		}
		current = aux;
	}
}

/**
 * swapnodes  - Swaps two elements of a double linked list
 * @nodeA : a double linked list node
 * @nodeB : other double linked list node
 * @list : doubly linked list to be sorted
 */

void swapnodes(listint_t *nodeA, listint_t *nodeB, listint_t **list)
{
	listint_t *aux;
	listint_t *aux_pointer[4];

	/* rename if out of order */
	if (nodeB->next == nodeA)
	{
		aux = nodeA;
		nodeA = nodeB;
		nodeB = aux;
	}

	/* creates auxiliar values of each node */
	aux_pointer[0] = nodeA->prev;
	aux_pointer[1] = nodeB->prev;
	aux_pointer[2] = nodeA->next;
	aux_pointer[3] = nodeB->next;


	nodeA->prev = aux_pointer[2];
	nodeB->prev = aux_pointer[0];
	nodeA->next = aux_pointer[3];
	nodeB->next = aux_pointer[1];


	if (nodeA->next)
		nodeA->next->prev = nodeA;

	if (nodeB->prev)
		nodeB->prev->next = nodeB;

	if (nodeB->prev == NULL)
		*list = nodeB;
}
