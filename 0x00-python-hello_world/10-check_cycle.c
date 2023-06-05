#include "lists.h"

/**
 * check_cycle - finds a loop in a linked list
 * @list: beggining of linked list
 * Return: 1 if loop 0 if no loop
 */

int check_cycle(listint_t *list)
{
listint_t *pace_low = list, *pace_fast = list;

while (pace_low && pace_fast && (*pace_fast).next)
{
pace_low = (*pace_low).next;
pace_fast = (*( *pace_fast).next).next;
if (pace_low == pace_fast)
return (1);
}
return (0);
}
