#include "sort.h"
/*
 * bubble_sort - Sorts an array of integers using bubble sort algorithm
 *
 * @array: Array of integers to be sorted
 * @size: Size of the array
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t arr_size, i = 0, tmp = 0, j = 1;

	if (array == NULL)
		return;
	if (size < 2)
		return;

	arr_size = size;

	while (arr_size != 0)
	{
		while (j < arr_size)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;

				print_array(array, size);
			}

			i++;
			j++;
		}

		i = 0, j = 1;
		arr_size--;
	}

}
