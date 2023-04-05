#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int x, n1 = 0, n2 = 0;

	for (x = 0; x < size; z++)
	{
		n1 += a[x];
		n2 += a[size - x - 1];
		a += size;
	}
	printf("%d, ", n1);
	printf("%d\n", n2);
}
