#include "main.h"
#include <stddef.h>

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to a string of 0 and 1 chars
* Return: the converted number, or 0 if b is NULL or contains chars other than 0 or 1
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
if (b == NULL)
return (0);
while (*b != '\0')
{
if (*b != '0' && *b != '1')
return (0);
result <<= 1;
if (*b == '1')
result += 1;
b++;
}
return (result);
}

