#include "main.h"
#include <sys/uio.h>

/**
 * read_textfile - A function that reads a text file and prints to
 * POSIX STDOUT
 * @filename: The filename to be opened
 * @letters: the number of letters to read and print
 * Return: No of letters read and printed, 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);
	rd = read(file, buf, letters);
	if (rd == -1)
		return (0);

	buf[letters] = '\0';

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
		return (0);

	close(file);
	free(buf);
	return (wr);
}
