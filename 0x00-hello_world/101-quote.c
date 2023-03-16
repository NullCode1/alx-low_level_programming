#include<unistd.h>

/**
 * main - Create main
 *
 * Description: print a qoute using function
 *
 * Return: 1 Err
*/

int main(void)
{	char Data[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, Data, 59);
	return (1);
}
