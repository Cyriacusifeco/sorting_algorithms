#include "sort.h"
/**
 * insertion_sort_list - Sorts a list of integers using insertion sort algorithm
 *
 * @list: list of integers to be sorted
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *left, *right, *temp;

	if (list == NULL)
		return;
	left = *list;
	right = left->next;

	if (right == NULL)
		return;

	while (right)
	{
		while (right->n < left->n)
		{
			temp = left->prev;
			left->next = right->next;
			right->next = left;
			left->prev = right;
			right->prev = temp;

			if (right->prev == NULL)
			{
				*list = right;
				return;
			}

			else
			{
				right->prev->next = right;
				left->next->prev = left;
			}

			right = left;
			left = right;

			print_list(*list);

			if (left->prev != NULL)
			{
				right = right->prev;
				left = left->prev;

			}

		}

		right = right->next;
		left = left->next;
	}

}
