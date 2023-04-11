#include "main.h"

/**
* get_endianness - checks the endianness
*
* Return: 0 if big endian, 1 if little endian
*/
/* Function that checks the endianness */
int get_endianness(void)
{
    unsigned int i = 1;
    char *c = (char*)&i;
    
/* If the first byte of the integer is non-zero, we're little endian */
    if (*c)
        return 1;
    
/* Otherwise, we're big endian */
    return 0;
}

