#include "monty.h"
/**
 * pop - removes the top element of the stack
 * @stack: pointer to the stack
 * @n_line: current line number
 *
 */
void pop(stack_t **stack, unsigned int n_line)
{
	stack_t *popped = NULL;

	if (*stack == NULL || stack == NULL)
	{
		printf("L%d: can't pop an empty stack\n", n_line);
/*agregar free o funcion free*/
		exit(EXIT_FAILURE);
	}
	(*stack)->next = popped;
	*stack = popped;

	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
	}
}
