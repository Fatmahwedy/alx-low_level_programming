#include "lists.h"
size_t print_dlistint(const dlistint_t *f)
{
    int counterr;
    counterr = 0;
    if (f == NULL)
        return (counterr);
    while (f->prev != NULL)
        f = f->prev;
    while (f != NULL)
    {
        printf("%d\n", f->n);
        counterr++;
        f = f->next;
    }
    return (counterr);
}
