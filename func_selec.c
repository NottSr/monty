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
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", _div},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{NULL, NULL}
	};

	while (ins[i].opcode != NULL)
	{
		if (strcmp(op, ins[i].opcode) == 0)
			return (ins[i].f);

		i++;
	}

	return (NULL);
}
