#include "sort.h"

/**
  * bubble_sort - Sorts an array in ascending order
  * @array: Array of integers
  * @size: Size of the integer array to be sorted
  *
  * Return: Nothing
  */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}
