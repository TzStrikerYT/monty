#include "monty.h"

/**
 * main - run opccode for commands
 * @argc: number of arguments
 * @argv: array of strings passed to the program
 * Return: 1 if reaches end of the file, exit "EXIT_FAILURE" of opccode fails
 */

int main(int argc, char **argv)
{
	FILE *file;
	char *line, command;
	size_t size = 0, n_line = 1;
	stack *stack = NULL;
	ssize_t read = 0;

	if (argc != 2)
		printf("usage: monty file\n"), exit(FILE_FAILURE);

	file = fopen(argv[1], "r");

	if (file == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	read = getline(&line, &size, file);

	while (read != -1)
	{
		/* command = find(line, &stack, n_line); */
		if (strcmp(command, "nop"))
			opc(command, &stack,n_line);

		if (rq.opcode != 0)
			kill_free(line, file, stack);

		n_line++;
		read = getline(&file, &size, file);
	}
	kill_stack(stack);
	free(line);
	fclose(file);
	return (0);
}
