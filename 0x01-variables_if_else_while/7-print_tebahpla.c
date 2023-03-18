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
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
