#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a text file and prints it to POSIX.
 * @filename: text file
 * @letters: number of letters to be read and printed
 *
 * Return:If the function fails or filename is NULL - 0.
 * O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t d, w, r;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	r = read(d, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(d);
	return (w);
}
