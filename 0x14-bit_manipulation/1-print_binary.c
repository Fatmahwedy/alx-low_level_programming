#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
	#include <stdio.h>

void print_binary(unsigned long int n) {
    unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
    while (mask > 0) {
        if (n & mask) {
            printf("1");
        } else {
            printf("0");
        }
        mask >>= 1;
    }
}

int main() {
    unsigned long int n = 42;
    printf("Binary representation of %lu: ", n);
    print_binary(n);
    printf("\n");
    return 0;
}

