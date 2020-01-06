#include "monty.h"

/**
 * pstr - Print out every element of the stack
 * @stack: Double pointer to the top of the stack
 * @n_line: The line that the command was found in the file
 **/

void pstr(stack_t **stack, unsigned int n_line)
{
	stack_t *tmp;
	(void) n_line;
	if (*stack != NULL)
	{
		tmp = *stack;
		while (tmp != NULL && tmp->n > 0 && tmp->n <= 127)
		{
			putchar(tmp->n);
			tmp = tmp->next;
		}
	}
	putchar('\n');
}
