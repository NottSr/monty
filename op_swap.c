#include "monty.h"
/**
 * swap - function that swaps the top two elements of the stack
 * @stack: Stack
 * @line_num: Line location
 * return: void
 */
void swap(stack_t **stack, unsigned int line_num)
{
	unsigned int aux = 0;
	size_t len = 0;

	len = stalen(*stack);

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too\n", line_num);
		exit(EXIT_FAILURE);
	}

	if (*stack)
	{
		aux = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = aux;
	}
}
