#include "main.h"
/**
 * flip_bits - computes the number of bits to flip to get from one number
 * to another.
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
  unsigned int count = 0;
  unsigned long int diff = n ^ m;

  while (diff > 0)
  {
    count += diff & 1;
    diff >>= 1;
  }

  return (count);
}

