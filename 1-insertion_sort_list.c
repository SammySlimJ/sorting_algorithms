#include "sort.h"
#include <stdio.h>

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *insert_after;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current;
		insert_after = current->prev;

		while (insert_after != NULL && insert_after->n > temp->n)
		{
			if (insert_after->next != temp)
			{
				if (insert_after->prev)
					insert_after->prev->next = temp;
				temp->prev = insert_after->prev;

				insert_after->next = temp->next;
				if (temp->next)
					temp->next->prev = insert_after;

				temp->next = insert_after;
				insert_after->prev = temp;

				if (temp->prev == NULL)
					*list = temp;

				print_list(*list);
			}
			insert_after = insert_after->prev;
		}
		current = current->next;
	}
}
