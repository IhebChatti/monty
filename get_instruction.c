#include "monty.h"

/**
 * get_instructions - function to call the function to the instruction
 * @tokens: array of tokens
 * @stack: head of the stack
 * @line_number: line number
 *
 * Return: Void
 */

void get_instructions(char **tokens, stack_t **stack, unsigned int line_number)
{
	int i = 0;
	char *check = tokens[1];
	instruction_t op_codes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{NULL, NULL}
	};
	if (tokens[1] == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free(tokens);
		exit(EXIT_FAILURE);
	}
	if (strcmp(tokens[0], "push") == 0 && isdigit(*check) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free(tokens);
		exit(EXIT_FAILURE);
	}
	stack_value = atoi(tokens[1]);
	while (op_codes[i].opcode != NULL)
	{
		if (strcmp(op_codes[i].opcode, tokens[0]) == 0)
			op_codes[i].f(stack, line_number);
		i++;
	}
}
