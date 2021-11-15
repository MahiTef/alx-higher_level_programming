#include "lists.h"

/**
 * check_cycle - check if a linked list has a cycle in it or not
 * @list: head of the list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
  listint_t *first_cycle, *second_cycle;

  second_cycle = list;
  first_cycle = list;

  if (!list || !list->next)
    return (0);
  for (;first_cycle && first_cycle->next;)
    {
      first_cyle = first_cycle->next->next;
      second_cyle = second_cycle->next;
      if (first_cycle == second_cycle)
	{
	  return (1);
	}
    }
  return (0);
}
