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
		while (1)
		{
			if (right->n < left->n)
			{
				//swap operation

				temp = left->prev;
				left->next = right->next;
				right->next = left;
				left->prev = right;
				right->prev = temp;

				//incase of a list with only two elements

				if (right->prev == NULL)
				{
					*list = right;
					return;
				}
				
				//update the nodes
				else
				{
					right->prev->next = right;
					left->next->prev = left;
				}
			}

			//if no swap operation
			else
				break;

			//updates transversal positions
			right = left;
			left = right;

			//prints list after each swap
			print_list(*list);
			
			//move a step backwards
			if (left->prev != NULL)
			{
				right = right->prev;
				left = left->prev;

			}

		}
		
		//continue with the next iteration
		right = right->next;
		left = left->next;
	}

}
