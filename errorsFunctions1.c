#include "monty.h"
/**
 * usageError - prints an error message when file input is missing
 *
 * Return: nothing
 */
void usageError(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 * pushError - prints an error message when push
 * command has incorrect arguments
 * @line_num: the line number
 *
 * Return: nothing
 */
void pushError(unsigned int line_num)
{
	fprintf(stderr, "L%d: usage: push integer\n", line_num);
	exit(EXIT_FAILURE);
}
/**
 * fileError - prints an error message when the file cannot be opened
 * @name: name of the file
 *
 * Return: nothing
 */
void fileError(char *name)
{
	fprintf(stderr, "Error: Can't open file %s\n", name);
	exit(EXIT_FAILURE);
}
/**
 * opcodeError - prints an error message for an unknown opcode
 * @line_num: the line number
 * @opcode: the opcode
 *
 * Return: nothing
 */
void opcodeError(unsigned int line_num, char *opcode)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", line_num, opcode);
	exit(EXIT_FAILURE);
}
/**
 * mallocError - prints an error message when malloc fails
 *
 * Return: nothing
 */
void mallocError(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
