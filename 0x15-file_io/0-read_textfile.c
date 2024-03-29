#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads the text file and prints to POSIX stdout
 * @filename: pointer to the name of the file
 * @letters: number of letters the function is to read and print
 * Return: if the function fails or the file name is NULL - 0
 * Ohterwise - the actual number of bytes the function can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
