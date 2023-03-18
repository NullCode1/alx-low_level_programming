#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Dscription: Determines if a number is positive, negative or zero.
 *
 * Return: value 0
*/

int main(void)
{
	int data;

	srand(time(0));
	data = rand() - RAND_MAX / 2;
	if (data > 0)
	{
		printf("%d is positive\n", data);
	}
	else
	{
		printf("%d is negative\n", data);
	}
	return (0);
}
