#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int user = 0;
	unsigned long int data = n ^ m;

	while (data)
	{
		if (data & 1ul)
			user++;
		data = data >> 1;
	}

	return (user);
}
