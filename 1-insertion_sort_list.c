#include "sort.h"

/**
  * insertion_sort_list - Sorts a doubly linked list in ascending order
  * @list: List to be sorted
  *
  * Return: Nothing
  */
void insertion_sort_list(listint_t **list)
{
    listint_t *current;
    int i = 0;
   
    current = *list;
    while(current)
    {
        i += 1;
        current = current->next;
    }
    printf("%d\n", i);
}
