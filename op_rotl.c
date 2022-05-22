#include "monty.h"
/**
 * rotl - function that rotates the stack to the top
 * @stack: Stack
 * @line_num: Line location
 * return: void
 */
void rotl(stack_t **stack, unsigned int line_num)
{
	stack_t *current = *stack;
	unsigned int aux = 0;

	UNUSED(line_num);
	if (current && current->next)
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
