#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet.
 *
 * Return: value 0
*/

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i], "\n");
	}
	return (0);
}