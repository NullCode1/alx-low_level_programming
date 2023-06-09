#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: length of argv
 * @argv: number of argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int position, total, change, aux;
	int Arr[] = {25, 10, 5, 2, 1};

	position = 0;
	total = 0;
	change = 0;
	aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (Arr[position] != '\0')
	{
		if (total >= Arr[position])
		{
			aux = (total / Arr[position]);
			change += aux;
			total -= Arr[position] * aux;
		}
		position++;
	}

	printf("%d\n", change);
	return (0);
}
