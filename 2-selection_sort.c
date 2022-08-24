#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in 
 * ascending order using the Selection sort algorithm 
 * array: the array
 * size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, curr, aux;

	if (!array)
		return;

	for (i = 0; i < size; i++)
	{
		curr = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[curr] > array[j])
			{
				curr = j;
			}
		}
		if (curr != i)
		{
			aux = array[i];
			array[i] = array[curr];
			array[curr] = aux;
			print_array(array, size);
		}
	}
}
