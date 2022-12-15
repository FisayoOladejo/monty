#include "monty.h"
/**
 * _sub- subtracts the top 2 elements of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void _sub(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int nodes;

	temp = *head;
	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	/*sub = temp->next->n - aux->n;*/
	temp->next->n = temp->next->n - aux->n;
	*head = temp->next;
	free(temp);
}
