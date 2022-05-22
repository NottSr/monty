#include "monty.h"
/**
 * rotl - function that swaps the top two elements of the stack
 * @stack: Stack
 * @line_num: Line location
 * return: void
 */
void rotl(stack_t **stack, unsigned int line_num)
{
	stack_t *current = *stack;
	unsigned int aux = 0;

	UNUSED(line_num);
	if(current && current->next)
	{
		while (current->next)
		{
			aux = current->n;
			current->n = (current->next)->n;
			(current->next)->n = aux;
			current = current->next;
		}
	}
}
