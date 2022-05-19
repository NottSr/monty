#include "monty.h"
/**
 * pall - function that prints all values of a stack
 * @stack: Stack
 * @line_num: Line location
 * return: void
 */
void pall(stack_t **stack, unsigned int line_num)
{
	stack_t *current = NULL;

	UNUSED(line_num);

	if (*stack)
	{
		current = *stack;
		while (current)
		{
			printf("%d\n", current->n);
			current = current->next;
		}
	}
}
