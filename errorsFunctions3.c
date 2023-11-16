#include "monty.h"
/**
 * div_error_short - prints an error message when
 * trying to divide with a too short stack
 * @line_num: line number
 *
 * Return: nothing
 */
void div_error_short(unsigned int line_num)
{
	fprintf(stderr, "L%d: can't div, stack too short\n", line_num);
	exit(EXIT_FAILURE);
}
/**
 * div_error_zero - prints an error
 * message for division by zero
 * @line_num: line number
 *
 * Return: nothing
 */
void div_error_zero(unsigned int line_num)
{
	fprintf(stderr, "L%d: division by zero\n", line_num);
	exit(EXIT_FAILURE);
}
/**
 * mul_error - prints an error message when trying
 * to multiply with a too short stack
 * @line_num: line number
 *
 * Return: nothing
 */
void mul_error(unsigned int line_num)
{
	fprintf(stderr, "L%d: can't mul, stack too short\n", line_num);
	exit(EXIT_FAILURE);
}
/**
 * mod_error - prints an error message when
 * trying to mod with a too short stack
 * @line_num: line number
 *
 * Return: nothing
 */
void mod_error(unsigned int line_num)
{
	fprintf(stderr, "L%d: can't mod, stack too short\n", line_num);
	exit(EXIT_FAILURE);
}
