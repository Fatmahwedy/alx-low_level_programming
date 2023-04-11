#include "main.h"


/**
* print_binary_helper - recursive helper function to print binary number
* @n: decimal number to convert and print as binary
*/

void print_binary_helper(unsigned long int n)
{
    if (n == 0)
        return;

    print_binary_helper(n >> 1);
    _putchar((n & 1) + '0');
}
