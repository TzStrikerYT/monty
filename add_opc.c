#include "monty.h"
/**
 * add_opcode - adds the top two elements of the stack
 * @stack: pointer to the stack
 * @n_line: current line number
 */
void add(stack_t *stack, unsigned int n_line)
{
        stack_t *actual_stack;
        int result = 0, elem1, elem2;

        if (stack == NULL || *stack == NULL)
        {
                printf("L%d: can't add, stack too short", n_line);
                exit(EXIT_FAILURE);
        }

        *stack = actual_stack;
        elem1 = actual_stack->n;
        elem2 = actual_stack->n;

        result = elem1 + elem2;

        (*stack)->n = result;
}
