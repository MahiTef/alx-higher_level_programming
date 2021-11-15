#include "lists.h"

/**
 * check_cycle - check if a linked list has a cycle in it or not
 * @list: head of the list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
  listint_t *first_cycle, *second_cycle;

  if (list == NULL || list->next == NULL)
    return (0);
  first_cycle = list;
  second_cycle = first_cycle->next;
while (first_cycle != NULL && second_cycle->next != NULL
       && second_cycle->next->next != NULL)
  {
    if (first_cycle == second_cycle)
      return (1);
    first_cycle = first_cycle->next;
    second_cycle = second_cycle->next->next;
  }
 return (0);
}
