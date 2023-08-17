#include "lists.h"
size_t dlistint_len(const dlistint_t *f)
{
    int counterr;
    counterr = 0;
    if (f == NULL)
        return (counterr);
    while (f->prev != NULL)
        f = f->prev;
    while (f != NULL)
    {
        counterr++;
        f = f->next;
    }
    return (counterr);
}
