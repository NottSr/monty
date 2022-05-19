#include "monty.h"
/**
 * stalen - function that returns the number of elements in stack
 * @stack: list
 * Return: the number of nodes (Success)
 */
size_t stalen(stack_t *stack)
{
	stack_t *current = stack;
	size_t n_nodes = 0;

	while (current)
	{
		n_nodes++;
		current = current->next;
	}
	return (n_nodes);
}
