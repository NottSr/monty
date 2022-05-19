#include "monty.h"
/**
 * free_s - function to free stack
 * return: void
 */
void free_s(void)
{
	stack_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	free(head);
}
