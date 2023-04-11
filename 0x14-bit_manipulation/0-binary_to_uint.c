#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{ 
    if (b == '\0') { 
        return 0; 
    } 

    unsigned int result = 0; 

    for (int i = 0; b[i] != '\0'; i++) { 
        if (b[i] != '0' && b[i] != '1') { 
            return 0; 
        } 

        result = result * 2 + (b[i] - '0'); 
    } 

    return result; 
}

