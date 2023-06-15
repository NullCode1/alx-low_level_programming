#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char const *argv[])
{
	int x = 0;

	while (argc--)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
