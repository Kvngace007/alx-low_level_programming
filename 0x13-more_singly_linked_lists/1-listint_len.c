#include "lists.h"

/**
 * Returns the number of elements in a linked lists
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h) {
    size_t num = 0;

    while (h != NULL) {
        num++;
        h = h->next;
    }

    return sum;
}
