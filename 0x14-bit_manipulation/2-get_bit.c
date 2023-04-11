#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
    unsigned long int mask; /* declare mask */

if (index >= sizeof(unsigned long int) * 8) /* check if index is out of bounds */
{
    return -1;
}
else
{
    mask = 1UL << index; /* set mask to 1 at the index-th bit */

    if (n & mask) /* if the bit at index is 1 */
    {
        return 1;
    }
    else /* if the bit at index is 0 */
    {
        return 0;
    }
}
}

