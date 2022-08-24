#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order using
 * the Quick sort algorithm
 * @array : the array to be sorted
 * @size : size of the array, quantity of elements
 */

void quick_sort(int *array, size_t size)
{
	int pivot, j = 0, i = j - 1, pivot, d;

	pivot = size - 1;

	for (j = 0; j < pivot - 1; j++)
	{
		if (array[j] < array[pivot])
		{
			i++;
			// swap(array[i], array[j]);
		}
		if (j + 1 == pivot) 
		{
			aux = array[pivot];
			for (d = pivot; d > i; d--)
			{
				if (d - 1 == i)
					array[d] = aux;
				else
					array[d] = array[d - 1];
			}
		}
	}
}
