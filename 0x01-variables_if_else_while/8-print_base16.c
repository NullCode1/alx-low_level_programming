#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: print all the numbers of base 16 in lowercase.
 *
 * Return: value 0
*/

int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x, "\n");
	}
	for (x = 97; x < 103; x++)
	{
		putchar(x, "\n");
	}
	return (0);
}
