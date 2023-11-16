#include "monty.h"
/**
 * empty_stack - prints an error message when trying
 * to print from an empty stack
 * @line_num: the line number
 *
 * Return: nothing
 */
void empty_stack(unsigned int line_num)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
	exit(EXIT_FAILURE);
}
/**
 * pop_error - prints an error message when trying to pop
 * from an empty stack
 * @line_num: the line number
 *
 * Return: nothing
 */
void pop_error(unsigned int line_num)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
	exit(EXIT_FAILURE);
}
/**
 * swap_error - prints an error message when trying
 * to swap with a too short stack
 * @line_num: the line number
 *
 * Return: nothing
 */
void swap_error(unsigned int line_num)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
	exit(EXIT_FAILURE);
}
/**
 * add_error - prints an error message when trying
 * to add with a too short stack
 * @line_num: the line number
 *
 * Return: nothing
 */
void add_error(unsigned int line_num)
{
	fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
	exit(EXIT_FAILURE);
}
/**
 * sub_error - prints an error message
 * when trying to subtract with a too short stack
 * @line_num: the line number
 *
 * Return: nothing
 */
void sub_error(unsigned int line_num)
{
	fprintf(stderr, "L%d: can't sub, stack too short\n", line_num);
	exit(EXIT_FAILURE);
}
