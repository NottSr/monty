#include "monty.h"
/**
 * func_selec - Function that selects function
 * @op: Monty instruction
 * Return: function found or NULL
 */
void (*func_selec(char *op))(stack_t **, unsigned int)
{
	int i = 0;
	instruction_t ins[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}};

	while (ins[i].opcode)
	{
		if (strcmp(op, ins[i].opcode) == 0)
			return (ins[i].f);

		++i;
	}

	return (NULL);
}
