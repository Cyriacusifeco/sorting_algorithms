#include "sort.h"
/**
 * selection_sort - Sorts an array of integers using selection sort algorithm
 *
 * @array: Array of integers to be sorted
 * @size: Size of the array
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, temp = 0, c = 0;
	int smallest_num = array[0];
	size_t arr_size;

	if (array == NULL)
		return;
	if (size < 2)
		return;

	arr_size = size;

	while (i < arr_size)
	{
		while (j < arr_size)
		{
			if (array[j] <= smallest_num)
			{
				smallest_num = array[j];
				c = j;
			}

			if (j == (size - 1) && smallest_num != array[i])
			{

				temp = array[i];
				array[i] = smallest_num;
				array[c] = temp;
				print_array(array, size);
			}

			j++;
		}



		i++;
		j = i;
		smallest_num = array[j];
	}

}
