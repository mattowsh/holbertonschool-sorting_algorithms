#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using
 * the Bubble sort algorithm
 * @array : array to be sorted
 * @size : size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, aux;

	for (j = 0; j < size - 1; j++)
	{
		for (i = 0; i < size - j - 1; i++)
		{
			while (array[i] > array[i + 1])
			{
				aux = array[i + 1];
				array[i + 1] = array[i];
				array[i] = aux;
			}
		}
		print_array(array, size);
	}
}
