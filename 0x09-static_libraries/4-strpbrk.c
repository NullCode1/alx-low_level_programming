#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int x, z;
	char *p;

	x = 0;
	while (s[x] != '\0')
	{
		z = 0;
		while (accept[z] != '\0')
		{
			if (accept[z] == s[x])
			{
				p = &s[x];
				return (p);
			}
			z++;
		}
		x++;
	}
	return (0);
}
