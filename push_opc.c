#include "monty.h"
/**
 * push - pushes an element to the stack
 * @stack: pointer to the stack
 * @n_line: current line number
 *
 */
void push(stack_t **stack, unsigned int n_line)
{
	stack_t *create_stack = NULL;
	int n_convert;

	if (isdigit(*stack) == NULL && isdigit(*stack) == 0)
	{
		printf("L%d: usage: push integer\n");
                /*agregar free o funcion que contenga free*/
		exit(EXIT_FAILURE);
	}

	create_stack = malloc(sizeof(stack_t));

	if (create_stack == NULL)
	{
		printf("Error: malloc failed\n");
                /*agregar free o funcion que contenga free*/
		exit(EXIT_FAILURE);
	}
	n_convert = atoi(n);
	create->n = n_convert;

	if (*stack == NULL)
	{
		create_stack->prev = NULL;
		create_stack->next = NULL;
		*stack = create_stack;
	}
	else
	{
		create_stack->next = *stack;
		(*stack)->prev = create_stack;
	}
	*stack = create_stack;
}
