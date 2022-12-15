#include "monty.h"

/**
* addqueue - add node to the end of stack
* @head: head of the stack
* @n: new_value
*
* Return: no return
*/

void addqueue(stack_t **head, int n)
{
  stack_t *new;
  stack_t *temp = *head;

  new = malloc(sizeof(stack_t));
  if (new == NULL)
  {
    printf("Error\n");
    exit(0);
  }
  new->n = n;

  if (*head == NULL)
  {
    *head = new;
    (*head)->prev = NULL;
    (*head)->next = NULL;
  }
  else
  {
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = new;
    new->next = NULL;
    new->prev = temp;
  }
}
