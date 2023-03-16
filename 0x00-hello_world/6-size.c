#include <stdio.h>

/**
 * main: Create main
 *
 * Description: useing sizeof.
 *
 * Result: return value 0
*/

int main(void)
{
	printf("size of a char: %u Byte(s)\n", sizeof(char));
	printf("size of an int: %u Byte(s)\n", sizeof(int));
	printf("size of a long int: %u Byte(s)\n", sizeof(long int));
	printf("size of a long int: %u Byte(s)\n", sizeof(long long int));
	printf("size of a float: %u Byte(s)\n", sizeof(float));
	return (0);
}
