#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to the stack
 * @n_line: current line number
 *
 */
void swap(stack_t **stack, unsigned int n_line)
{
	stack_t *actual_stack = NULL;
	int container;

	if (*stack == NULL || stack == NULL)
	{
		printf("L%d: can't swap, stack too short\n", n_line);
		exit(EXIT_FAILURE);
	}

	*stack = actual_stack;
	actual_stack->n = container;
	(*stack)->n = (*stack)->next->n;
	container = (*stack)->next->n;
}
