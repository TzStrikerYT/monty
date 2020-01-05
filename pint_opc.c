#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @stack: pointer to the stack
 * @n_line: current line number
 *
 */
void pint(stack_t **stack, unsigned int n_line)
{
	int value_top;

	if (*stack != NULL || stack != NULL)
	{
		value_top = (*stack)->n;
		printf("%d\n", value_top);
	}
	printf("L%d: can't pint, stack empty\n", n_line);
	exit(EXIT_FAILURE);
}
