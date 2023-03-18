#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet without q and e.
 *
 * Return: value 0
*/

int main(void)
{
	int x;

	for (x = 97; x < 123; x++)
	{
		if (x != 101 &&	x != 113)
		{
			putchar(x, "\n");
		}
	}
	return (0);
}
