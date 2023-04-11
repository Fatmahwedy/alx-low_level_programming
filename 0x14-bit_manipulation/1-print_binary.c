#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
    unsigned long int mask = 1;

    /* Check if n is 0 */
    if (n == 0)
    {
        _putchar('0');
        return;
    }

    /* Find the most significant bit */
    while (mask <= n)
        mask <<= 1;
    mask >>= 1;

    /* Print the binary digits */
    while (mask > 0)
    {
        if ((n & mask) == 0)
            _putchar('0');
        else
            _putchar('1');
        mask >>= 1;
    }
}

