#include "monty.h"

/**
 * sub - Substract the top element of the stack
 * @stack of the stack
 * @n_line: the line the command was found
 */

void sub(stack_t **stack, unsigned int n_line)
{
	stack_t *tmp = *stack;

	if (tmp == NULL || tmp->next == NULL)
	{
		printf("L%u: can't sub, stack too short\n", n_line);
		rq.opcode = 1;
	}
	if (rq.opcode != 1)
	{
		tmp->next->n -= tmp->n;
		pop(stack, n_line);
	}
}
