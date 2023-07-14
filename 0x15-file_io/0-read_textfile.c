 #include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *user;
	ssize_t x;
	ssize_t w;
	ssize_t t;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	user = malloc(sizeof(char) * letters);
	t = read(x, user, letters);
	w = write(STDOUT_FILENO, user, t);

	free(user);
	close(x);
	return (w);
}
