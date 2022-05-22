#include "monty.h"
/**
 * rotr - function that rotates the stack to the bottom
 * @stack: Stack
 * @line_num: Line location
 * return: void
 */
void rotr(stack_t **stack, unsigned int line_num)
{
	stack_t *current = *stack;
	unsigned int aux = 0;

	UNUSED(line_num);
	if (current && current->next)
	{
		while (current->next)
			current = current->next;
		
		while (current->prev)
		{
			aux = current->n;
			current->n = (current->prev)->n;
			(current->prev)->n = aux;
			current = current->prev;
		}
	}
}
