#include "monty.h"
/**
 * _div - divides the top two elements of the stack.
 *  @head: stack head
 *  @counter: line_number
 *  Return: no return
 */
void _div(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int len = 0;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp->next->n = temp->next->n / temp->n;
	*head = temp->next;
	free(temp);
}
