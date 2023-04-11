#include "main.h"
#include "main.h"

void print_binary(unsigned long int n)
{
    unsigned long int mask;

    mask = 1UL << ((sizeof(unsigned long int) << 3) - 1); /* set mask to 1000...0000 */

    while (mask > 0)
    {
        if (n & mask) /* if the bit in n is set */
        {
            _putchar('1');
        }
        else
        {
            _putchar('0');
        }

        mask >>= 1; /* shift the mask right by 1 */
    }

    _putchar('\n');
}

