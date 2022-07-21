#include "main.h"
/**
 * create_file - create_file to create a text file
 * @filename: pointer
 * @text_content: pointer
 * Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, length = 1;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, length);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
