#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * @stack: head node
 * @line_number: line nmbr
 *
 * Return: Void
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;
	if (stack_len(*stack) < 2 || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp->next->n += (*stack)->n;
	*stack = (*stack)->next;
	free(temp);
	(*stack)->prev = NULL;

}

/**
 * nop - does nothing
 * @stack: head node
 * @line_number: line nmbr
 *
 * Return: Void
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
