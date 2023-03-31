#include "lists.h"
/**
 * list_len - Counts the number of nodes in a linked list
 * @head: Pointer to the head node of the linked list
 * Return: The number of nodes in the linked list
 */
size_t list_len(const list_t *head)
{
        size_t i;
        const list_t *curr;

        i = 0;
        curr = head;

        for (; curr != NULL; curr = curr->next)
        {
                i++;
        }
        return (i);
}
