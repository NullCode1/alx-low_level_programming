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
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 &&	i != 113)
		{
			putchar(i);
		}
	}
	patchar("\n");
	return (0);
}i
