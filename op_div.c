#include "monty.h"
/**
 * _div - function that div the top two elements of the stack
 * @stack: Stack
 * @line_num: Line location
 * return: void
 */
void _div(stack_t **stack, unsigned int line_num)
{
	stack_t *aux = *stack;
	size_t len = 0;
	unsigned int a = 0, b = 0;

	len = stalen(*stack);

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	a = aux->n;
	if (a == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_num);
		exit(EXIT_FAILURE);
	}
	b = (aux->next)->n;
	(aux->next)->n = b / a;
	*stack = aux->next;
	free(aux);
}
