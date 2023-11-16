#include "monty.h"
/**
 * pint - function that prints the top element of the stack
 * @stack: pointer to pointer of the first element of the stack
 * @line_num: the line number
 * @n: data of the node
 *
 * Return: nothing
 */
void pint(stack_t **stack, unsigned int line_num, char *n)
{
	stack_t *temp;
	(void) n;

	temp = *stack;
	if (temp != 0)
		printf("%d\n", temp->n);
	else
		empty_stack(line_num);
}
/**
 * pop - function to remove the top element from the stack
 * @stack: pointer to pointer of the first element of the stack
 * @line_num: the line number
 * @n: data of the node
 *
 * Return: nothing
 */
void pop(stack_t **stack, unsigned int line_num, char *n)
{
	stack_t *temp;
	(void) n;

	temp = *stack;
	if (temp != 0)
	{
		*stack = (*stack)->next;
		free(temp);
	}
	else
		pop_error(line_num);
}
/**
 * swap - function that swaps the top two elements
 * @stack: pointer to pointer of the first element of the stack
 * @line_num: the line number
 * @n: data of the node
 *
 * Return: nothing
 */
void swap(stack_t **stack, unsigned int line_num, char *n)
{
	stack_t *top, *next;
	int temp;
	(void) line_num;
	(void) n;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		top = *stack;
		next = (*stack)->next;

		temp = top->n;
		top->n = next->n;
		next->n = temp;
	}
	else
		swap_error(line_num);
}
/**
 * add - function that adds the top two elements of the stack
 * @stack: pointer to pointer of the first element of the stack
 * @line_num: the line number
 * @n: data of the node
 *
 * Return: nothing
 */
void add(stack_t **stack, unsigned int line_num, char *n)
{
	stack_t *top, *next;
	int sum;
	(void) n;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		top = *stack;
		next = (*stack)->next;
		sum = top->n + next->n;
		next->n = sum;

		*stack = next;
		next->prev = NULL;
		free(top);
	}
	else
		add_error(line_num);
}
/**
 * nop - Do nothing
 * @stack: pointer to pointer of the first element of the stack
 * @line_num: the line number
 * @n: data of the node
 *
 * Return: nothing
 */
void nop(stack_t **stack, unsigned int line_num, char *n)
{
	(void) stack;
	(void) line_num;
	(void) n;
}
