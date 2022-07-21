#include "main.h"
/**
 * read_textfile - read_textfile to read a text file
 * @filename: char
 * @letters: num of letters
 * Return: value of w
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, o, w;
	char *try;
	if (filename == NULL)
	{
		return (0);
	}
	try = malloc(letters);
	if (try == NULL)
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	r = read(o, try, letters);
	w = write(STDOUT_FILENO, try, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(try);
		return (0);
	}
	free(try);
	close(o);
	return (w);
}
