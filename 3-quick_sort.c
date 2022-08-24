#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order using
 * the Quick sort algorithm
 * @array : the array to be sorted
 * @size : size of the array, quantity of elements
 */
void quick_sort(int *array, size_t size)
{
	if (!array)
		return;

	recursion(array, size, 0, size - 1);
}

/**
 * recursion - recursive function used for quicksort algorithm
 * @array: the array
 * @size: the size of the array
 * @min: the value that is furthest to the left
 * @max: the value that is furthest to the right
 */
void recursion(int *array, size_t size, int min, int max)
{
	int pivot;

	if (min < max)
	{
		/** for the pivot to be at the right place */
		pivot = partition(array, size, min, max);
		/** for the first part of the partittion */
		recursion(array, size, min, pivot - 1);
		/** for the second one */
		recursion(array, size, pivot + 1, max);
	}
}

/**
 * partition - Lomuto partition scheme
 * @array: pointer to the array to work in
 * @size: size of the array
 * @min: the value that is furthest to the left
 * @max: the value that is furthest to the right
 * Return: the value of the pivot
 */
int partition(int *array, size_t size, int min, int max)
{
	int pivot = array[max];
	int i = min - 1, j;

	for (j = min; j <= max; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			/** se swapea array[i] con array[j] */
			swap(array, size, i, j);
		}
	}
	/** se swapea el pivot con el array[i + 1] */
	swap(array, size, i + 1, max);

	return (i + 1);
}

/**
 * swap - swap two integers
 * @array: the array
 * @size: the size of the array
 * @min: the value that is furthest to the left
 * @max: the value that is furthest to the right
 */
void swap(int *array, size_t size, int min, int max)
{
	int aux;

	if (array[min] != array[max])
	{
		aux = array[min];
		array[min] = array[max];
		array[max] = aux;
		print_array(array, size);
	}
}
