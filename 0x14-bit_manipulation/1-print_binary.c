#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int user = sizeof(n) * 8, data = 0;

	while (user)
	{
		if (n & 1L << --user)
		{
			_putchar('1');
                        data++;
		}
		else if (data)
			_putchar('0');
	}
	if (!data)
		_putchar('0');
}
