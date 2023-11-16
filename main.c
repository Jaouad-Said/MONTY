#include "monty.h"
#define MAX_LINE_LENGTH 256

/**
 * main - the entry point to the program
 * @argc: the number of arguments
 * @argv: list of parameters passed to the main
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	FILE *fptr;
	char line[MAX_LINE_LENGTH];
	unsigned int line_num = 1;
	stack_t *stack = NULL;
	char *opcode, *argument;

	if (argc != 2)
		usageError();
	fptr = fopen(argv[1], "r");
	if (fptr == NULL)
		fileError(argv[1]);
	while (fgets(line, sizeof(line), fptr) != NULL)
	{
		line[strcspn(line, "\n")] = '\0';
		opcode = strtok(line, " ");
		argument = strtok(NULL, " ");
		fflush(stdout);
		if (opcode != NULL && *opcode != '\0' && opcode[0] != '#')
		{
			void (*op_func)(stack_t **, unsigned int, char *);

			op_func = get_op_func(opcode);
			if (op_func != NULL)
				op_func(&stack, line_num, argument);
			else
				opcodeError(line_num, opcode);
		}
		else
		{
			line_num++;
			continue;
		}
		line_num++;
	}
	free_stack(&stack);
	fclose(fptr);
	return (0);
}
