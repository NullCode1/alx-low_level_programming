#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:Prints the alphabet V2.0
 *
 * Return: value 0
*/

int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i], "\n");
	}
	return (0);
}
