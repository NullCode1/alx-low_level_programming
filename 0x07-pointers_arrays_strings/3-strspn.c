#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, z;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (z = 0; accept[z] != s[x]; z++)
		{
			if (accept[z] == '\0')
				return (x);
		}
	}
	return (x);
}
