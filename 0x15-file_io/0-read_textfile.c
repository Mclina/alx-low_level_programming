#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	 ssize_t o, d, t;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff ==  NULL)
		return (0);

	o = open(filename, O_RDONLY);
	d = read(o, buff, letters);
	t = write(STDOUT_FILENO, buff, d);

	if (o == -1 || d == -1 || t == -1 || t != d)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(o);

	return (t);

}

