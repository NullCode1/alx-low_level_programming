#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:print the lowercase Alphabet in reverse.
 *
 * Return: value 0
*/

int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev, "\n");
	}
	return (0);
}
